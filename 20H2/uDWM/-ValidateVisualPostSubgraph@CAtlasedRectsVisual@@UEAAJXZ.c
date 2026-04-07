/*
 * XREFs of ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x180039FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::ValidateVisualPostSubgraph(CAtlasedRectsVisual *this, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v5; // edi
  __int64 v6; // rbx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // r10d
  unsigned int v11; // eax
  unsigned __int64 v12; // r11
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  unsigned int v21; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v23; // [rsp+50h] [rbp+8h]
  unsigned __int64 v24; // [rsp+58h] [rbp+10h]

  v3 = *((_DWORD *)this + 20);
  if ( (v3 & 0x100) != 0 )
  {
    LOBYTE(a3) = *((_DWORD *)this + 22) != 0;
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                           + 16LL)
                                                             + 496LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
            a3);
    v21 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x3B5u);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAA,
        (__int64)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)v21);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E,
        (__int64)"clientcore\\windows\\dwm\\udwm\\atlasedrectsvisual.cpp",
        (const char *)v21);
      return v21;
    }
    *((_DWORD *)this + 20) &= ~0x100u;
    v3 = *((_DWORD *)this + 20);
  }
  if ( (v3 & 0x1000) == 0 )
    goto LABEL_24;
  v5 = 0;
  if ( !*((_DWORD *)this + 66) )
    goto LABEL_23;
  do
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 30) + 8LL * v5);
    v7 = *(_DWORD *)(v6 + 32);
    v8 = *(_DWORD *)(v6 + 36);
    v9 = *(_DWORD *)(v6 + 44);
    v10 = *(_DWORD *)(v6 + 40);
    if ( v7 == 0x7FFFFFFF && v8 == 0x7FFFFFFF && v10 == 0x7FFFFFFF && v9 == 0x7FFFFFFF )
      goto LABEL_21;
    v11 = 0;
    v24 = *(_QWORD *)(v6 + 24);
    v12 = HIDWORD(v24);
    v23 = 0LL;
    if ( v8 == 0x7FFFFFFF )
    {
      if ( v7 != 0x7FFFFFFF )
        goto LABEL_8;
    }
    else
    {
      v13 = *((_DWORD *)this + 30);
      if ( v7 != 0x7FFFFFFF )
      {
        LODWORD(v24) = v13 - v8 - v7;
LABEL_8:
        LODWORD(v23) = *(_DWORD *)(v6 + 32);
        v11 = v23;
        goto LABEL_9;
      }
      v11 = v13 - v24 - v8;
      LODWORD(v23) = v11;
    }
LABEL_9:
    if ( v9 == 0x7FFFFFFF )
    {
      if ( v10 == 0x7FFFFFFF )
        goto LABEL_13;
    }
    else
    {
      v14 = *((_DWORD *)this + 31);
      if ( v10 == 0x7FFFFFFF )
      {
        HIDWORD(v23) = v14 - v12 - v9;
        goto LABEL_13;
      }
      HIDWORD(v24) = v14 - v10 - v9;
    }
    HIDWORD(v23) = *(_DWORD *)(v6 + 40);
LABEL_13:
    if ( (int)v24 <= 0 )
      LODWORD(v24) = 0;
    if ( SHIDWORD(v24) <= 0 )
      HIDWORD(v24) = 0;
    if ( __PAIR64__(HIDWORD(v23), v11) != *(_QWORD *)(v6 + 16) )
    {
      *(_DWORD *)(v6 + 96) |= 1u;
      v17 = *(_QWORD *)(v6 + 80);
      *(_QWORD *)(v6 + 16) = v23;
      if ( v17 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 24LL))(v17, 0x2000LL);
    }
    if ( *(_QWORD *)(v6 + 24) != v24 )
    {
      *(_DWORD *)(v6 + 96) |= 1u;
      v15 = *(_QWORD *)(v6 + 80);
      *(_QWORD *)(v6 + 24) = v24;
      if ( v15 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 24LL))(v15, 0x2000LL);
    }
LABEL_21:
    ++v5;
  }
  while ( v5 < *((_DWORD *)this + 66) );
  v3 = *((_DWORD *)this + 20);
LABEL_23:
  v3 &= ~0x1000u;
  *((_DWORD *)this + 20) = v3;
LABEL_24:
  if ( (v3 & 0x2000) == 0 )
    return 0LL;
  v18 = (*(__int64 (__fastcall **)(CAtlasedRectsVisual *))(*(_QWORD *)this + 192LL))(this);
  v19 = v18;
  if ( v18 >= 0 )
  {
    *((_DWORD *)this + 20) &= ~0x2000u;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x79,
    (__int64)"clientcore\\windows\\dwm\\udwm\\atlasedrectsvisual.cpp",
    (const char *)(unsigned int)v18);
  return v19;
}
