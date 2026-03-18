/*
 * XREFs of ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001C8E0
 * Callers:
 *     hCreateSolidBrushInternal @ 0x1C001C840 (hCreateSolidBrushInternal.c)
 *     bInitBRUSHOBJ @ 0x1C02911B0 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1C02915F4 (bInitBrush.c)
 * Callees:
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C001CAB8 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     HmgAllocateObjectAttr @ 0x1C001D314 (HmgAllocateObjectAttr.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C003DC40 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0041490 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00475D0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C00A36F4 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 *     HmgFreeObjectAttr @ 0x1C00A566C (HmgFreeObjectAttr.c)
 */

BRUSHMEMOBJ *__fastcall BRUSHMEMOBJ::BRUSHMEMOBJ(BRUSHMEMOBJ *this, int a2, unsigned int a3, int a4, int a5)
{
  struct BRUSH *v8; // rax
  ULONG_PTR v9; // rsi
  unsigned int v10; // edi
  unsigned int v11; // edi
  char v12; // r13
  ULONG_PTR v13; // rdi
  _QWORD *ObjectAttr; // r15
  unsigned int v16; // edi
  unsigned int v17; // edi
  unsigned int v18; // edi
  unsigned int v19; // edi
  __int64 v20; // [rsp+58h] [rbp-40h] BYREF
  int v21; // [rsp+60h] [rbp-38h]

  *((_DWORD *)this + 2) = 0;
  if ( a3 > 0xC )
  {
    *(_QWORD *)this = 0LL;
  }
  else
  {
    v8 = BRUSHMEMOBJ::pbrAllocBrush(this, a4);
    v9 = (ULONG_PTR)v8;
    *(_QWORD *)this = v8;
    if ( v8 )
    {
      *((_DWORD *)v8 + 19) = a2;
      *((_DWORD *)v8 + 20) = a3;
      *((_QWORD *)v8 + 3) = 0LL;
      **((_DWORD **)v8 + 6) = 0;
      if ( a3 < 6 )
      {
        *((_DWORD *)v8 + 10) = 32802;
      }
      else
      {
        v10 = a3 - 6;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v16 = v11 - 1;
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( v17 )
              {
                v18 = v17 - 1;
                if ( v18 )
                {
                  v19 = v18 - 1;
                  if ( v19 )
                  {
                    if ( v19 == 1 )
                      *((_DWORD *)v8 + 10) = 256;
                  }
                  else
                  {
                    *((_DWORD *)v8 + 10) = 22;
                  }
                }
                else
                {
                  *((_DWORD *)v8 + 10) = 18;
                }
              }
              else
              {
                *((_DWORD *)v8 + 10) = 21;
              }
            }
            else
            {
              *((_DWORD *)v8 + 10) = 17;
            }
          }
          else
          {
            *((_DWORD *)v8 + 10) = 20;
          }
        }
        else
        {
          *((_DWORD *)v8 + 10) = 16;
        }
      }
      v12 = 0;
      v13 = 0LL;
      if ( HmgInsertObjectInternal(v8, 3u, 0x10u) )
      {
        v13 = v9;
        if ( a5 )
        {
          ObjectAttr = (_QWORD *)HmgAllocateObjectAttr();
          if ( ObjectAttr )
          {
            v20 = 0LL;
            v21 = 0;
            HANDLELOCK::bLockHobj((HANDLELOCK *)&v20, *(struct HOBJ__ **)v9, 0x10u);
            if ( v21 )
            {
              *ObjectAttr = *(_QWORD *)(v9 + 72);
              *(_QWORD *)(v20 + 16) = ObjectAttr;
              *(_QWORD *)(v9 + 48) = ObjectAttr;
              HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
              if ( v21 )
                HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
            }
          }
        }
      }
      else
      {
        v12 = 1;
        *(_QWORD *)this = 0LL;
      }
      if ( v13 )
        _InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
      if ( v12 )
        FreeBrushMemory(v9);
    }
  }
  return this;
}
