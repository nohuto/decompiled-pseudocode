/*
 * XREFs of ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180012860
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18000CCF0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180012980 (-DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCanvasVisual::UpdateLayout(CCanvasVisual *this)
{
  int v1; // esi
  const struct tagSIZE *v3; // rcx
  int v4; // eax
  char v5; // bp
  __int64 v6; // rdi
  __int64 v7; // rcx
  struct tagPOINT v9; // [rsp+50h] [rbp+8h] BYREF
  struct tagSIZE v10; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0;
  v3 = (const struct tagSIZE *)*((_QWORD *)this + 3);
  if ( v3
    && CVisual::DoCanvasLayout(v3 + 15, (const struct _MARGINS *)this + 8, (const struct tagSIZE *)this + 15, &v9, &v10) )
  {
    v4 = (*(__int64 (__fastcall **)(CCanvasVisual *, struct tagSIZE *))(*(_QWORD *)this + 96LL))(this, &v10);
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x116u);
      goto LABEL_12;
    }
    if ( v9.x != *((_DWORD *)this + 28) || v9.y != *((_DWORD *)this + 29) )
    {
      *((struct tagPOINT *)this + 14) = v9;
      (*(void (__fastcall **)(CCanvasVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 8LL);
    }
  }
  v5 = 0;
  LODWORD(v6) = -1;
  while ( 1 )
  {
    if ( v5 )
    {
      v6 = (unsigned int)(v6 + 1);
    }
    else
    {
      v5 = 1;
      v6 = 0LL;
    }
    if ( (unsigned int)v6 >= *((_DWORD *)this + 18) )
      break;
    v7 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v6);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, 2LL);
  }
LABEL_12:
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x53u);
  else
    (*(void (__fastcall **)(CCanvasVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 4LL);
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x3Bu);
  return (unsigned int)v1;
}
