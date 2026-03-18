/*
 * XREFs of NtGdiCreateRectRgn @ 0x1C001CC30
 * Callers:
 *     <none>
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C001CE90 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C001D230 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     HmgAllocateObjectAttr @ 0x1C001D314 (HmgAllocateObjectAttr.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003C850 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C003DC40 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00406D0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0044450 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     HmgFreeObjectAttr @ 0x1C00A566C (HmgFreeObjectAttr.c)
 *     EngSetLastError @ 0x1C00AAA00 (EngSetLastError.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 ObjectAttr; // r14
  struct OBJECT *v7; // rdi
  struct OBJECT *v8; // rbx
  struct HOBJ__ *inserted; // rsi
  _RECTL v11; // [rsp+20h] [rbp-20h] BYREF
  struct OBJECT *v12; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+38h] [rbp-8h]

  v11.left = a1;
  v11.top = a2;
  v11.right = a3;
  v4 = (a1 & 0xF8000000) + 0x8000000;
  v11.bottom = a4;
  if ( (v4 & 0xF7FFFFFF) != 0
    || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (v5 = (a2 & 0xF8000000) + 0x8000000, (v5 & 0xF7FFFFFF) != 0) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    ObjectAttr = HmgAllocateObjectAttr(v4, v5);
    if ( ObjectAttr )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12, 0, 1);
      v7 = v12;
      if ( v12 )
      {
        ERECTL::vOrder((ERECTL *)&v11);
        RGNOBJ::vSet((RGNOBJ *)&v12, &v11);
        v8 = 0LL;
        inserted = HmgInsertObjectInternal(v7, 1u, 4u);
        if ( inserted )
        {
          v8 = v7;
          *((_QWORD *)GdiHandleManager::GetEntryFromObject(gpHandleManager, v7) + 2) = ObjectAttr;
        }
        else
        {
          REGION::vDeleteREGION(v7);
          v7 = 0LL;
          v12 = 0LL;
          HmgFreeObjectAttr(ObjectAttr);
        }
        if ( v8 )
        {
          _InterlockedDecrement((volatile signed __int32 *)v8 + 3);
          v7 = v12;
        }
      }
      else
      {
        inserted = 0LL;
        EngSetLastError(8u);
      }
      if ( v13 == 1 )
        REGION::vDeleteREGION(v7);
    }
    else
    {
      inserted = 0LL;
      EngSetLastError(8u);
    }
  }
  return inserted;
}
