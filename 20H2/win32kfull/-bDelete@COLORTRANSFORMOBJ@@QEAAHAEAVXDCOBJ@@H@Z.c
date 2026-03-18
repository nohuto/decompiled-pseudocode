/*
 * XREFs of ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0293264
 * Callers:
 *     XDCOBJ_vCleanupColorTransformWrap @ 0x1C00F4130 (XDCOBJ_vCleanupColorTransformWrap.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0293478 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C02B4BB4 (-GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ?bRemoveColorTransform@XDCOBJ@@QEAAHPEAX@Z @ 0x1C0293418 (-bRemoveColorTransform@XDCOBJ@@QEAAHPEAX@Z.c)
 */

__int64 __fastcall COLORTRANSFORMOBJ::bDelete(COLORTRANSFORMOBJ *this, struct XDCOBJ *a2, int a3)
{
  _QWORD *v3; // rax
  unsigned int v4; // edi
  void *v8; // r13
  __int64 v9; // r14
  __int64 v10; // rbx
  int v11; // ecx
  unsigned int (__fastcall *v12)(_QWORD, __int64); // rax
  __int128 v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h]
  int v16; // [rsp+48h] [rbp-38h]
  _QWORD v17[2]; // [rsp+50h] [rbp-30h] BYREF
  __int16 v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]
  __int64 v20; // [rsp+70h] [rbp-10h]

  v3 = *(_QWORD **)this;
  v4 = 0;
  if ( *(_QWORD *)this )
  {
    v8 = (void *)*v3;
    if ( (unsigned int)HmgRemoveObject(*v3, 0LL, 1LL, 1LL, 14, 0LL) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)this + 24LL);
      if ( v9 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
        if ( v10 )
        {
          v11 = *(_DWORD *)(v10 + 40);
          if ( (v11 & 0x8000) != 0 && a3 )
          {
            *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
          }
          else
          {
            v17[1] = 0LL;
            v14 = 0LL;
            v18 = 256;
            v20 = 0LL;
            v19 = 0LL;
            v17[0] = 0LL;
            v16 = 1;
            if ( (v11 & 1) != 0 )
            {
              *(_QWORD *)&v14 = *(_QWORD *)(v10 + 48);
              v15 = v10;
              GreAcquireSemaphore(v14);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v14, 11LL);
            }
            v12 = *(unsigned int (__fastcall **)(_QWORD, __int64))(v10 + 3208);
            if ( v12 )
            {
              if ( v12(*(_QWORD *)(v10 + 1800), v9) || (*(_DWORD *)(v10 + 40) & 0x8000) != 0 )
                *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
            }
            else
            {
              EngSetLastError(0x57u);
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v14);
            if ( v17[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v17);
          }
        }
      }
      if ( !*(_QWORD *)(*(_QWORD *)this + 24LL) )
      {
        XDCOBJ::bRemoveColorTransform(a2, v8);
        FreeObject(*(_QWORD *)this, 14LL);
        *(_QWORD *)this = 0LL;
      }
    }
    return 1;
  }
  return v4;
}
