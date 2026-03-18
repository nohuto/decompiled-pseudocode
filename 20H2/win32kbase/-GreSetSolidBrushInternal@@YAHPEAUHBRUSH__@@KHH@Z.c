/*
 * XREFs of ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C001C060
 * Callers:
 *     SetSysColor @ 0x1C001BDF4 (SetSysColor.c)
 *     hCreateSolidBrushInternal @ 0x1C001C840 (hCreateSolidBrushInternal.c)
 *     GreSetSolidBrush @ 0x1C013E1F0 (GreSetSolidBrush.c)
 * Callees:
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0018550 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     HmgSafeNextObjt @ 0x1C001A270 (HmgSafeNextObjt.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C001C198 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C001C1DC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00427C0 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall GreSetSolidBrushInternal(HBRUSH a1, int a2, int a3, int a4)
{
  unsigned int v7; // r15d
  struct OBJECT *v8; // rbx
  unsigned int v9; // eax
  volatile signed __int32 *v10; // rdi
  int v11; // esi
  bool v12; // zf
  int v14; // ecx
  __int64 v15; // rcx
  __int64 Objt; // rax
  struct OBJECT *v17[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v18[8]; // [rsp+40h] [rbp-38h] BYREF
  int v19; // [rsp+48h] [rbp-30h]

  v7 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v17, a1);
  v8 = v17[0];
  if ( v17[0] )
  {
    v9 = *((_DWORD *)v17[0] + 10);
    if ( (v9 & 0x10) != 0 && ((v9 & 0x200) == 0 || a4) && ((v9 >> 10) & 1) == a3 )
    {
      v10 = 0LL;
      v11 = 0;
      GreAcquireHmgrSemaphore();
      if ( *((_DWORD *)v8 + 2) == 1 || a4 )
      {
        *((_DWORD *)v8 + 19) = a2;
        v7 = 1;
        HANDLELOCK::HANDLELOCK((HANDLELOCK *)v18, v8, 0, 0, 0);
        if ( v19 )
        {
          if ( *((_DWORD *)v8 + 2) == 1 )
          {
            if ( *((_DWORD *)v8 + 25) != -1 )
            {
              v14 = *((_DWORD *)v8 + 10);
              if ( v14 >= 0 )
              {
                v10 = (volatile signed __int32 *)*((_QWORD *)v8 + 15);
                v11 = ((unsigned int)v14 >> 30) & 1;
              }
            }
            *((_DWORD *)v8 + 24) = 0;
            *((_DWORD *)v8 + 25) = -1;
            if ( a4 )
            {
              *((_DWORD *)v8 + 10) &= ~0x80000000;
            }
            else
            {
              *((_DWORD *)v8 + 20) = 7;
              *((_DWORD *)v8 + 10) = 20;
            }
          }
          else
          {
            *((_DWORD *)v8 + 26) = -1;
            LODWORD(v15) = 0;
            *((_DWORD *)v8 + 27) = -1;
            *((_DWORD *)v8 + 28) = -1;
            while ( 1 )
            {
              Objt = HmgSafeNextObjt(v15, 1);
              if ( !Objt )
                break;
              if ( *(struct OBJECT **)(Objt + 1296) == v8 )
                *(_DWORD *)(Objt + 316) |= 1u;
              v15 = *(_QWORD *)Objt;
            }
          }
          HANDLELOCK::vUnlock((HANDLELOCK *)v18);
        }
        v12 = v19 == 0;
        *((_DWORD *)v17[0] + 11) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
        if ( !v12 )
          HANDLELOCK::vUnlock((HANDLELOCK *)v18);
      }
      GreReleaseHmgrSemaphore();
      if ( v10 )
      {
        if ( _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
          RBRUSH::vFreeOrCacheRBrush(v10, v11);
        *((_QWORD *)v17[0] + 15) = 0LL;
      }
    }
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v17);
  return v7;
}
