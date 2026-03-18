/*
 * XREFs of ?UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x180060DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureDeviceResource@CDrawListBitmap@@QEBAJPEBVCDrawingContext@@@Z @ 0x180061030 (-EnsureDeviceResource@CDrawListBitmap@@QEBAJPEBVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommonRenderingEffect::UpdateBitmaps(CCommonRenderingEffect *this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  char *i; // rdi
  __int64 v8; // rbx
  bool v9; // r14
  void (__fastcall *v10)(__int64, void *, __int64); // r14
  __int64 (__fastcall ***v11)(_QWORD, _BYTE *); // rcx
  __int64 v12; // r8
  int v13; // eax
  void *v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // r14
  int v17; // ebx
  __int64 (__fastcall ***v18)(_QWORD, _BYTE *); // rcx
  int v19; // ecx
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  _QWORD *v26; // [rsp+30h] [rbp-68h] BYREF
  int v27; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v28[4]; // [rsp+3Ch] [rbp-5Ch] BYREF
  _BYTE v29[16]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v30[16]; // [rsp+50h] [rbp-48h] BYREF

  v2 = 0;
  v3 = 0LL;
  for ( i = (char *)this + 16; !*(_QWORD *)i && !*((_QWORD *)i + 1); i += 48 )
  {
LABEL_4:
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 2 )
      return v2;
  }
  v8 = *(_QWORD *)i;
  *((_OWORD *)i + 1) = *(_OWORD *)((char *)a2 + 56);
  *((_QWORD *)i + 4) = *((_QWORD *)a2 + 9);
  if ( v8 )
  {
    v9 = *((_QWORD *)a2 + 6) && !*((_BYTE *)g_pComposition + 1129);
    (*(void (__fastcall **)(__int64, bool, _QWORD, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, v9, *((_QWORD *)a2 + 7), 0LL);
    if ( v9 )
    {
      v10 = *(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v8 + 40LL);
      v11 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)a2 + 4)
                                                      + 8LL
                                                      + *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL) + 12LL));
      v12 = *(unsigned int *)((**v11)(v11, v29) + 8);
      v13 = *((_DWORD *)a2 + 102);
      if ( v13 )
        v14 = (void *)(*((_QWORD *)a2 + 53) + 68LL * (unsigned int)(v13 - 1));
      else
        v14 = &CMILMatrix::Identity;
      v10(v8, v14, v12);
    }
  }
  v15 = *(_QWORD *)i;
  v26 = 0LL;
  if ( v15 )
  {
    if ( (*(int (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v15 + 48LL))(v15, &v26) < 0 )
      goto LABEL_20;
  }
  else
  {
    v26 = (_QWORD *)*((_QWORD *)i + 1);
    v23 = (__int64)v26 + *(int *)(v26[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  }
  v16 = v26;
  (*(void (__fastcall **)(_QWORD *, int *))(*v26 + 16LL))(v26, &v27);
  v17 = v27;
  if ( v27 != DisplayId::None && v27 != DisplayId::All )
  {
    v24 = *((_QWORD *)a2 + 4) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL) + 16LL);
    v25 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24 + 8LL))(v24, v28);
    if ( v17 == DisplayId::None || v17 == v25 || v25 == DisplayId::All )
      *((_BYTE *)a2 + 5949) = 1;
    else
      *((_BYTE *)a2 + 5951) = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16) )
  {
    if ( *((_BYTE *)g_pComposition + 1129) )
      *((_BYTE *)a2 + 5951) = 1;
    else
      *((_BYTE *)a2 + 5948) = 1;
  }
  v18 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))((char *)v16 + *(int *)(v16[1] + 8LL) + 8);
  v19 = *(_DWORD *)((**v18)(v18, v30) + 8);
  if ( v19 == 1 )
  {
LABEL_37:
    *((_BYTE *)a2 + 5950) = 1;
  }
  else if ( v19 >= 3 )
  {
    switch ( v19 )
    {
      case 3:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 21:
      case 23:
      case 24:
        goto LABEL_37;
      default:
        break;
    }
  }
LABEL_20:
  if ( v26 )
  {
    v20 = (__int64)v26 + *(int *)(v26[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = CDrawListBitmap::EnsureDeviceResource((CCommonRenderingEffect *)((char *)this + 48 * v3 + 16), a2);
  v2 = v21;
  if ( v21 >= 0 )
    goto LABEL_4;
  MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x54u, 0LL);
  return v2;
}
