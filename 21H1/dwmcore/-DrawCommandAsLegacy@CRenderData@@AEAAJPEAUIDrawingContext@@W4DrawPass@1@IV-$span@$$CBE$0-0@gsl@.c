/*
 * XREFs of ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV?$span@$$CBE$0?0@gsl@@@Z @ 0x1800A7B68
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800A7310 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::DrawCommandAsLegacy(__int64 a1, __int64 *a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v5; // ebx
  int v8; // r9d
  int v9; // r9d
  int v10; // eax
  __int64 v11; // rcx
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // r9d
  __int64 v22; // r8
  __int64 (__fastcall *v23)(__int64 *, __int128 *, __int64); // rax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // r9d
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 (__fastcall *v33)(__int64 *, _QWORD, __int128 *, __int64, int); // r10
  __int64 v34; // rax
  int v35; // xmm2_4
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  __int128 v40; // [rsp+30h] [rbp-20h] BYREF

  v5 = 0;
  v8 = a4 - 460;
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
            v21 = v15 - 1;
            if ( v21 )
            {
              v30 = v21 - 1;
              if ( v30 )
              {
                if ( v30 == 1 )
                  (*(void (__fastcall **)(__int64 *, _QWORD))(*a2 + 88))(
                    a2,
                    *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)));
                else
                  return (unsigned int)-2003303421;
              }
              else
              {
                v31 = *(_QWORD *)(a5 + 8);
                v32 = *(unsigned int *)(v31 + 4);
                v33 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *, __int64, int))(*a2 + 40);
                v34 = *(_QWORD *)(a1 + 128);
                v35 = *(_DWORD *)(v31 + 24);
                v40 = *(_OWORD *)(v31 + 8);
                v36 = v33(a2, *(_QWORD *)(v34 + 8 * v32), &v40, v31 + 28, v35);
                v5 = v36;
                if ( v36 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x36Au, 0LL);
              }
            }
            else
            {
              v22 = *(_QWORD *)(a5 + 8);
              v23 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64))(*a2 + 16);
              v40 = *(_OWORD *)(v22 + 4);
              v24 = v23(a2, &v40, v22 + 20);
              v5 = v24;
              if ( v24 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x341u, 0LL);
            }
          }
          else
          {
            v16 = *(_QWORD *)(a5 + 8);
            v17 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL * *(unsigned int *)(v16 + 4));
            v18 = *a2;
            v40 = *(_OWORD *)(v16 + 8);
            v19 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, _QWORD))(v18 + 8))(a2, &v40, v17, 0LL);
            v5 = v19;
            if ( v19 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x34Bu, 0LL);
          }
        }
        else
        {
          v38 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a2 + 80))(
                  a2,
                  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)),
                  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 8LL)));
          v5 = v38;
          if ( v38 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x37Fu, 0LL);
        }
      }
      else
      {
        v28 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD))(*a2 + 24))(
                a2,
                *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)),
                *(_QWORD *)(a5 + 8) + 8LL,
                0LL);
        v5 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x360u, 0LL);
      }
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a2 + 32))(
              a2,
              *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)),
              *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 8LL)));
      v5 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x356u, 0LL);
    }
  }
  else
  {
    v26 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a2 + 48))(
            a2,
            *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL * *(unsigned int *)(*(_QWORD *)(a5 + 8) + 4LL)));
    v5 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x375u, 0LL);
  }
  return v5;
}
