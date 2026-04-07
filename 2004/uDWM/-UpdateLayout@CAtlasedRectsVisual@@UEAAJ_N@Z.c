/*
 * XREFs of ?UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z @ 0x18003AE90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::UpdateLayout(CAtlasedRectsVisual *this)
{
  __int64 v2; // rcx
  int v3; // ebp
  unsigned int v4; // esi
  unsigned int v5; // r8d
  int v6; // edx
  int v7; // edi
  unsigned __int64 v8; // r10
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdi
  char v13; // si
  __int64 v14; // rcx
  unsigned int v16; // eax
  int v17; // eax
  unsigned __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h]

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  if ( v2 )
  {
    v4 = *((_DWORD *)this + 32);
    v5 = *((_DWORD *)this + 33);
    v6 = *((_DWORD *)this + 35);
    v7 = *((_DWORD *)this + 34);
    if ( __PAIR64__(v5, v4) != 0x7FFFFFFF7FFFFFFFLL || v7 != 0x7FFFFFFF || v6 != 0x7FFFFFFF )
    {
      v18 = *((_QWORD *)this + 15);
      v8 = HIDWORD(v18);
      if ( v5 == 0x7FFFFFFF )
      {
        v16 = 0;
        if ( v4 != 0x7FFFFFFF )
          v16 = v4;
        v4 = v16;
        LODWORD(v19) = v16;
      }
      else
      {
        v9 = *(_DWORD *)(v2 + 120);
        if ( v4 == 0x7FFFFFFF )
        {
          v4 = v9 - v18 - v5;
          LODWORD(v19) = v4;
        }
        else
        {
          LODWORD(v19) = v4;
          LODWORD(v18) = v9 - v5 - v4;
        }
      }
      if ( v6 == 0x7FFFFFFF )
      {
        v17 = 0;
        if ( v7 != 0x7FFFFFFF )
          v17 = v7;
        v7 = v17;
        HIDWORD(v19) = v17;
      }
      else
      {
        v10 = *(_DWORD *)(v2 + 124);
        if ( v7 == 0x7FFFFFFF )
        {
          v7 = v10 - v8 - v6;
          HIDWORD(v19) = v7;
        }
        else
        {
          HIDWORD(v19) = v7;
          HIDWORD(v18) = v10 - v7 - v6;
        }
      }
      if ( (int)v18 <= 0 )
        LODWORD(v18) = 0;
      if ( SHIDWORD(v18) <= 0 )
        HIDWORD(v18) = 0;
      v11 = (*(__int64 (__fastcall **)(CAtlasedRectsVisual *, unsigned __int64 *))(*(_QWORD *)this + 96LL))(this, &v18);
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x116u);
        goto LABEL_22;
      }
      if ( v4 != *((_DWORD *)this + 28) || v7 != *((_DWORD *)this + 29) )
      {
        *((_QWORD *)this + 14) = v19;
        (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 8LL);
      }
    }
  }
  LODWORD(v12) = -1;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 )
    {
      v12 = (unsigned int)(v12 + 1);
    }
    else
    {
      v13 = 1;
      v12 = 0LL;
    }
    if ( (unsigned int)v12 >= *((_DWORD *)this + 18) )
      break;
    v14 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v12);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, 2LL);
  }
LABEL_22:
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x88u);
  else
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
  return (unsigned int)v3;
}
