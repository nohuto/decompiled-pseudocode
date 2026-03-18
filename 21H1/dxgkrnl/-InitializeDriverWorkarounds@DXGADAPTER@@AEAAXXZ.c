/*
 * XREFs of ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C017866C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0176AF4 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?xwtol@@YAKPEBG@Z @ 0x1C0169290 (-xwtol@@YAKPEBG@Z.c)
 *     DxgkInitializeBlockList @ 0x1C0178AA4 (DxgkInitializeBlockList.c)
 */

void __fastcall DXGADAPTER::InitializeDriverWorkarounds(DXGADAPTER *this)
{
  _DWORD **v1; // rdi
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  __int64 v6; // rsi
  int v7; // eax
  const wchar_t *v8; // rcx
  wchar_t *v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  const wchar_t *v12; // rcx
  wchar_t *v13; // rax
  int v14; // eax
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-49h] BYREF
  __int64 v16; // [rsp+40h] [rbp-39h] BYREF
  int v17; // [rsp+48h] [rbp-31h]
  const wchar_t *v18; // [rsp+50h] [rbp-29h]
  struct _UNICODE_STRING *p_UnicodeString; // [rsp+58h] [rbp-21h]
  int v20; // [rsp+60h] [rbp-19h]
  __int64 v21; // [rsp+68h] [rbp-11h]
  int v22; // [rsp+70h] [rbp-9h]
  __int64 v23; // [rsp+78h] [rbp-1h]
  int v24; // [rsp+80h] [rbp+7h]
  __int128 v25; // [rsp+88h] [rbp+Fh]
  __int128 v26; // [rsp+98h] [rbp+1Fh]
  __int64 v27; // [rsp+A8h] [rbp+2Fh]
  int Key; // [rsp+E0h] [rbp+67h] BYREF

  v1 = (_DWORD **)((char *)this + 2576);
  DxgkInitializeBlockList(*((_QWORD *)this + 27), *((unsigned int *)this + 576), (char *)this + 2576);
  if ( (**v1 & 0x80u) != 0 )
    WdDiagNotifyUser(32LL, 9LL, 0LL, 0LL);
  v3 = *((_DWORD *)this + 576);
  if ( v3 != 8704 )
  {
LABEL_6:
    v4 = v3;
    if ( v3 < 0x2000 || v3 >= 9216 )
      goto LABEL_11;
    goto LABEL_8;
  }
  if ( (*((_DWORD *)this + 87) & 0x200) != 0 )
  {
    *((_BYTE *)this + 2621) = 1;
    goto LABEL_6;
  }
LABEL_8:
  v5 = *((_DWORD *)this + 81);
  if ( v5 == 32902 || (v4 = v3, v5 == 4098) )
  {
    **v1 |= 0x40u;
    v4 = *((_DWORD *)this + 576);
  }
LABEL_11:
  v6 = -1LL;
  if ( v4 >= 0x2000 )
  {
    v7 = *((_DWORD *)this + 81);
    if ( v7 == 4098 || v7 == 4318 )
    {
      *((_DWORD *)this + 507) |= 0x40u;
    }
    else if ( v7 == 32902 && (*((_DWORD *)this + 507) & 0x40) != 0 )
    {
      Key = *((_DWORD *)this + 82);
      if ( bsearch(&Key, &unk_1C0079020, 0x18uLL, 4uLL, UintCompareFunc) )
      {
        v8 = (const wchar_t *)*((_QWORD *)this + 196);
        if ( v8 )
        {
          v9 = wcsrchr(v8, 0x2Eu);
          if ( v9 )
          {
            v10 = -1LL;
            do
              ++v10;
            while ( v9[v10] );
            if ( v10 == 5 && (unsigned int)xwtol(v9 + 1) - 1 <= 0x116D )
              *((_DWORD *)this + 507) &= ~0x40u;
          }
        }
      }
    }
  }
  if ( *((int *)this + 576) >= 9216 )
    *((_DWORD *)this + 507) |= 8u;
  if ( *((_DWORD *)this + 81) == 1297040209 )
  {
    v11 = *((_DWORD *)this + 643);
    if ( v11 <= 2000 )
    {
      **v1 |= 0x10u;
      v18 = L"PhoneSOCVersion";
      p_UnicodeString = &UnicodeString;
      v27 = 0LL;
      *(_QWORD *)&UnicodeString.Length = 0LL;
      UnicodeString.Buffer = 0LL;
      v16 = 0LL;
      v17 = 292;
      v20 = 16777217;
      v21 = 0LL;
      v22 = 0;
      v23 = 0LL;
      v24 = 0;
      v25 = 0LL;
      v26 = 0LL;
      if ( (int)RtlQueryRegistryValuesEx(
                  0LL,
                  L"\\Registry\\Machine\\System\\Platform\\DeviceTargetingInfo",
                  &v16,
                  0LL,
                  0LL) >= 0
        && UnicodeString.Length >= 4u
        && (!RtlCompareUnicodeStrings(UnicodeString.Buffer, 4uLL, L"8992", 4uLL, 0)
         || !RtlCompareUnicodeStrings(UnicodeString.Buffer, 4uLL, L"8994", 4uLL, 0)) )
      {
        **v1 |= 0x20u;
      }
      RtlFreeUnicodeString(&UnicodeString);
      v11 = *((_DWORD *)this + 643);
    }
    if ( v11 <= 1300 )
    {
      **v1 |= 1u;
      **v1 |= 2u;
      **v1 |= 8u;
    }
    if ( *((_DWORD *)this + 576) == 4608 )
      **v1 |= 4u;
    if ( *((_DWORD *)this + 82) == 1161245232 )
    {
      if ( *((_DWORD *)this + 83) != 810570829
        || *((_DWORD *)this + 84) != 808794160
        || *((_DWORD *)this + 85) != 124
        || (**v1 |= 0x1000u, **v1 |= 0x2000u, *((_DWORD *)this + 82) == 1161245232) )
      {
        if ( *((_DWORD *)this + 83) == 810434888 && *((_DWORD *)this + 84) == 808794160 && *((_DWORD *)this + 85) == 124 )
          **v1 |= 0x4000u;
      }
    }
  }
  if ( (**v1 & 0x400) != 0 )
  {
    *((_BYTE *)this + 2508) = 0;
    *((_DWORD *)this + 628) = 1;
    *((_BYTE *)this + 2613) = 0;
    *((_BYTE *)this + 2617) = 0;
    *((_BYTE *)this + 2615) = 0;
  }
  if ( *((int *)this + 576) <= 9216 && *((_DWORD *)this + 81) == 32902 )
  {
    v12 = (const wchar_t *)*((_QWORD *)this + 196);
    if ( v12 )
    {
      v13 = wcsrchr(v12, 0x2Eu);
      if ( v13 )
      {
        do
          ++v6;
        while ( v13[v6] );
        if ( v6 == 5 && (unsigned int)xwtol(v13 + 1) - 1 <= 0x17F6 )
          **v1 |= 0x20000u;
      }
    }
  }
  v14 = *((_DWORD *)this + 576);
  if ( v14 == 8960 )
  {
    if ( *((_DWORD *)this + 81) != 4098 )
      return;
    **v1 |= 0x40000u;
    v14 = *((_DWORD *)this + 576);
  }
  if ( v14 <= 9728 && *((_DWORD *)this + 81) == 4098 )
    **v1 |= 0x80000u;
}
