/*
 * XREFs of ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV?$span@$$CBE$0?0@gsl@@@Z @ 0x18005B20C
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18005AAF0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::DrawCommandAsLegacy(__int64 a1, __int64 *a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v5; // ebx
  int v8; // r9d
  int v9; // r9d
  int v10; // eax
  unsigned int v11; // ecx
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  int v25; // r9d
  int v26; // r9d
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // r9
  __int64 (__fastcall *v32)(__int64 *, _QWORD, __int128 *, __int64, int); // r11
  int v33; // xmm2_4
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // ecx
  __int128 v40; // [rsp+30h] [rbp-20h] BYREF

  v5 = 0;
  v8 = a4 - 455;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v13 = v9 - 2;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            v25 = v15 - 1;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( v26 )
              {
                if ( v26 == 1 )
                  (*(void (__fastcall **)(__int64 *, _QWORD))(*a2 + 88))(
                    a2,
                    *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)));
                else
                  return (unsigned int)-2003303421;
              }
              else
              {
                v31 = *(_QWORD *)(a5 + 8);
                v32 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *, __int64, int))(*a2 + 40);
                v33 = *(_DWORD *)(v31 + 24);
                v34 = *(unsigned int *)(v31 + 4);
                v35 = *(_QWORD *)(a1 + 136);
                v40 = *(_OWORD *)(v31 + 8);
                v36 = v32(a2, *(_QWORD *)(v35 + 8 * v34), &v40, v31 + 28, v33);
                v5 = v36;
                if ( v36 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x362u, 0LL);
              }
            }
            else
            {
              v27 = *(_QWORD *)(a5 + 8);
              v28 = *a2;
              v40 = *(_OWORD *)(v27 + 4);
              v29 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64))(v28 + 16))(a2, &v40, v27 + 20);
              v5 = v29;
              if ( v29 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x339u, 0LL);
            }
          }
          else
          {
            v16 = *(_QWORD *)(a5 + 8);
            v17 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(v16 + 4));
            v18 = *a2;
            v40 = *(_OWORD *)(v16 + 8);
            v19 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, _QWORD))(v18 + 8))(a2, &v40, v17, 0LL);
            v5 = v19;
            if ( v19 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x343u, 0LL);
          }
        }
        else
        {
          v38 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a2 + 80))(
                  a2,
                  *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)),
                  *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 8LL)));
          v5 = v38;
          if ( v38 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x377u, 0LL);
        }
      }
      else
      {
        v21 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD))(*a2 + 24))(
                a2,
                *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)),
                *(_QWORD *)(a5 + 8) + 8LL,
                0LL);
        v5 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x358u, 0LL);
      }
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a2 + 32))(
              a2,
              *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)),
              *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 8LL)));
      v5 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x34Eu, 0LL);
    }
  }
  else
  {
    v23 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a2 + 48))(
            a2,
            *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)));
    v5 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x36Du, 0LL);
  }
  return v5;
}
