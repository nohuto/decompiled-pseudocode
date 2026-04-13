/*
 * XREFs of ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@_W@Z @ 0x18009BA90
 * Callers:
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x180099DCC (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18002A510 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ??0sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z @ 0x18007982C (--0sentry@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ?_Osfx@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAXXZ @ 0x180079BA8 (-_Osfx@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAXXZ.c)
 *     ?uncaught_exception@std@@YA_NXZ @ 0x1800B103C (-uncaught_exception@std@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::operator<<<wchar_t,std::char_traits<wchar_t>>(__int64 *a1)
{
  __int64 *v1; // rsi
  int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int16 v9; // r9
  int v10; // ecx
  _WORD **v11; // rcx
  unsigned __int16 *v12; // rdx
  __int64 v13; // rcx
  int v14; // edx
  _WORD **v15; // rcx
  _WORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int16 v19; // r9
  int v20; // ecx
  _WORD **v21; // rcx
  unsigned __int16 *v22; // rdx
  char *v23; // rcx
  int v24; // edx
  __int64 v25; // rcx
  char *v27; // rdx
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // [rsp+28h] [rbp-40h] BYREF
  char v31; // [rsp+30h] [rbp-38h]
  int v33; // [rsp+78h] [rbp+10h]

  v1 = a1;
  v2 = 0;
  v33 = 0;
  std::wostream::sentry::sentry((__int64)&v30, a1);
  if ( v31 )
  {
    v3 = *(int *)(*v1 + 4);
    v4 = *(__int64 *)((char *)v1 + v3 + 40);
    v5 = *(_DWORD *)((char *)v1 + v3 + 24);
    v6 = 0LL;
    if ( v4 > 1 )
      v6 = v4 - 1;
    try
    {
      if ( (v5 & 0x1C0) == 0x40 )
      {
LABEL_16:
        v13 = *(__int64 *)((char *)v1 + *(int *)(*v1 + 4) + 72);
        if ( **(_QWORD **)(v13 + 64) )
          v14 = **(_DWORD **)(v13 + 88);
        else
          v14 = 0;
        if ( v14 <= 0 )
        {
          if ( (*(unsigned __int16 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, 38LL) == 0xFFFF )
            v2 = 4;
          goto LABEL_23;
        }
        --**(_DWORD **)(v13 + 88);
        v15 = *(_WORD ***)(v13 + 64);
        v16 = (*v15)++;
        *v16 = 38;
        while ( !v2 && v6 > 0 )
        {
          v17 = *(int *)(*v1 + 4);
          v18 = *(__int64 *)((char *)v1 + v17 + 72);
          v19 = *(_WORD *)((char *)v1 + v17 + 88);
          if ( **(_QWORD **)(v18 + 64) )
            v20 = **(_DWORD **)(v18 + 88);
          else
            v20 = 0;
          if ( v20 <= 0 )
          {
            v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 24LL))(v18, v19);
          }
          else
          {
            --**(_DWORD **)(v18 + 88);
            v21 = *(_WORD ***)(v18 + 64);
            v22 = (*v21)++;
            *v22 = v19;
          }
          --v6;
          v2 = 4;
          if ( v19 != 0xFFFF )
            v2 = 0;
LABEL_23:
          v33 = v2;
        }
      }
      else
      {
        while ( !v2 )
        {
          if ( v6 <= 0 )
            goto LABEL_16;
          v7 = *(int *)(*v1 + 4);
          v8 = *(__int64 *)((char *)v1 + v7 + 72);
          v9 = *(_WORD *)((char *)v1 + v7 + 88);
          if ( **(_QWORD **)(v8 + 64) )
            v10 = **(_DWORD **)(v8 + 88);
          else
            v10 = 0;
          if ( v10 <= 0 )
          {
            v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, v9);
          }
          else
          {
            --**(_DWORD **)(v8 + 88);
            v11 = *(_WORD ***)(v8 + 64);
            v12 = (*v11)++;
            *v12 = v9;
          }
          --v6;
          v2 = 4;
          if ( v9 != 0xFFFF )
            v2 = 0;
          v33 = v2;
        }
      }
    }
    catch ( ... )
    {
      v27 = (char *)a1 + *(int *)(*a1 + 4);
      v28 = *((_DWORD *)v27 + 4) | 4;
      v29 = v28 & 0x17;
      *((_DWORD *)v27 + 4) = v29;
      if ( (v29 & *((_DWORD *)v27 + 5)) != 0 )
        throw;
      v1 = a1;
      v2 = v33;
    }
  }
  *(__int64 *)((char *)v1 + *(int *)(*v1 + 4) + 40) = 0LL;
  v23 = (char *)v1 + *(int *)(*v1 + 4);
  if ( v2 )
  {
    v24 = v2 | *((_DWORD *)v23 + 4);
    if ( !*((_QWORD *)v23 + 9) )
      LOBYTE(v24) = v24 | 4;
    std::ios_base::clear((std::ios_base *)v23, v24, 0);
  }
  if ( !std::uncaught_exception() )
    std::wostream::_Osfx(v30);
  v25 = *(_QWORD *)(*(int *)(*(_QWORD *)v30 + 4LL) + v30 + 72);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return v1;
}
