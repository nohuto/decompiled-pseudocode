/*
 * XREFs of ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C00A8AF8
 * Callers:
 *     SetSysColor @ 0x1C00A8878 (SetSysColor.c)
 *     hCreateSolidBrushInternal @ 0x1C00A92D0 (hCreateSolidBrushInternal.c)
 *     GreSetSolidBrush @ 0x1C0146890 (GreSetSolidBrush.c)
 * Callees:
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0005F20 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C008030C (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     HmgSafeNextObjt @ 0x1C009A930 (HmgSafeNextObjt.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00A8C30 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00A8C74 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetSolidBrushInternal(HBRUSH a1, int a2, int a3, int a4)
{
  unsigned int v7; // r15d
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  struct OBJECT *v11; // rbx
  unsigned int v12; // eax
  volatile signed __int32 *v13; // rdi
  int v14; // esi
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r8d
  bool v18; // zf
  int v20; // ecx
  __int64 v21; // rcx
  __int64 Objt; // rax
  struct OBJECT *v23[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v24[8]; // [rsp+40h] [rbp-38h] BYREF
  int v25; // [rsp+48h] [rbp-30h]

  v7 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v23, a1);
  v11 = v23[0];
  if ( v23[0] )
  {
    v12 = *((_DWORD *)v23[0] + 10);
    if ( (v12 & 0x10) != 0 && ((v12 & 0x200) == 0 || a4) && ((v12 >> 10) & 1) == a3 )
    {
      v13 = 0LL;
      v14 = 0;
      GreAcquireHmgrSemaphore(v9, v8, v10);
      if ( *((_DWORD *)v11 + 2) == 1 || a4 )
      {
        *((_DWORD *)v11 + 19) = a2;
        v7 = 1;
        HANDLELOCK::HANDLELOCK((HANDLELOCK *)v24, v11, 0, 0, 0);
        if ( v25 )
        {
          if ( *((_DWORD *)v11 + 2) == 1 )
          {
            if ( *((_DWORD *)v11 + 25) != -1 )
            {
              v20 = *((_DWORD *)v11 + 10);
              if ( v20 >= 0 )
              {
                v13 = (volatile signed __int32 *)*((_QWORD *)v11 + 15);
                v14 = ((unsigned int)v20 >> 30) & 1;
              }
            }
            *((_DWORD *)v11 + 24) = 0;
            *((_DWORD *)v11 + 25) = -1;
            if ( a4 )
            {
              *((_DWORD *)v11 + 10) &= ~0x80000000;
            }
            else
            {
              *((_DWORD *)v11 + 20) = 7;
              *((_DWORD *)v11 + 10) = 20;
            }
          }
          else
          {
            *((_DWORD *)v11 + 26) = -1;
            LODWORD(v21) = 0;
            *((_DWORD *)v11 + 27) = -1;
            *((_DWORD *)v11 + 28) = -1;
            while ( 1 )
            {
              Objt = HmgSafeNextObjt(v21, 1);
              if ( !Objt )
                break;
              if ( *(struct OBJECT **)(Objt + 1296) == v11 )
                *(_DWORD *)(Objt + 316) |= 1u;
              v21 = *(_QWORD *)Objt;
            }
          }
          HANDLELOCK::vUnlock((HANDLELOCK *)v24);
        }
        v16 = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
        v18 = v25 == 0;
        *((_DWORD *)v23[0] + 11) = v16;
        if ( !v18 )
          HANDLELOCK::vUnlock((HANDLELOCK *)v24);
      }
      GreReleaseHmgrSemaphore(v16, v15, v17);
      if ( v13 )
      {
        if ( _InterlockedExchangeAdd(v13, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v13, v14);
        *((_QWORD *)v23[0] + 15) = 0LL;
      }
    }
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v23);
  return v7;
}
