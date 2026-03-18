/*
 * XREFs of NtGdiCreateRectRgn @ 0x1C00A9630
 * Callers:
 *     <none>
 * Callees:
 *     HmgFreeObjectAttr @ 0x1C00350CC (HmgFreeObjectAttr.c)
 *     EngSetLastError @ 0x1C003C4D0 (EngSetLastError.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C0075FA0 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C007D2B0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C007F140 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0083120 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008BC60 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A9890 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     HmgAllocateObjectAttr @ 0x1C00A98BC (HmgAllocateObjectAttr.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 ObjectAttr; // r14
  struct OBJECT *v7; // rdi
  struct OBJECT *v8; // rbx
  struct HOBJ__ *inserted; // rsi
  struct _RECTL v11; // [rsp+20h] [rbp-20h] BYREF
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
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12, 0LL, 1);
      v7 = v12;
      if ( v12 )
      {
        ERECTL::vOrder((ERECTL *)&v11);
        RGNOBJ::vSet((struct _RECTL **)&v12, &v11);
        v8 = 0LL;
        inserted = HmgInsertObjectInternal(v7, 1u, 4);
        if ( inserted )
        {
          v8 = v7;
          *((_QWORD *)GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, v7) + 2) = ObjectAttr;
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
