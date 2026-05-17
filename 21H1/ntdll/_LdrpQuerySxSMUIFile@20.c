/*
 * XREFs of _LdrpQuerySxSMUIFile@20 @ 0x4B2B9006
 * Callers:
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 * Callees:
 *     _LdrpQuerySxSMUIFile@20 @ 0x4B2B9006 (_LdrpQuerySxSMUIFile@20.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlDosApplyFileIsolationRedirection_Ustr@36 @ 0x4B2C9830 (_RtlDosApplyFileIsolationRedirection_Ustr@36.c)
 *     _RtlFindActivationContextSectionString@20 @ 0x4B2CA130 (_RtlFindActivationContextSectionString@20.c)
 *     @RtlDeactivateActivationContextUnsafeFast@4 @ 0x4B2CC6C0 (@RtlDeactivateActivationContextUnsafeFast@4.c)
 *     @RtlActivateActivationContextUnsafeFast@8 @ 0x4B2CDC10 (@RtlActivateActivationContextUnsafeFast@8.c)
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 *     _RtlLcidToLocaleName@16 @ 0x4B2D5A10 (_RtlLcidToLocaleName@16.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 */

int __fastcall LdrpQuerySxSMUIFile(int a1, int a2, int a3, UNICODE_STRING *a4, int a5)
{
  int ActivationContextSectionString; // esi
  int v8; // eax
  int v9; // eax
  int v10; // edi
  _DWORD v11[9]; // [esp+10h] [ebp-164h] BYREF
  _DWORD v12[16]; // [esp+34h] [ebp-140h] BYREF
  int v13; // [esp+78h] [ebp-FCh]
  int v14; // [esp+7Ch] [ebp-F8h]
  int v15; // [esp+80h] [ebp-F4h]
  int v16; // [esp+84h] [ebp-F0h]
  _BYTE v17[2]; // [esp+88h] [ebp-ECh] BYREF
  __int16 v18; // [esp+8Ah] [ebp-EAh]
  PUNICODE_STRING UnicodeString; // [esp+8Ch] [ebp-E8h]
  int v20; // [esp+90h] [ebp-E4h] BYREF
  int v21; // [esp+94h] [ebp-E0h] BYREF
  __int16 v22; // [esp+98h] [ebp-DCh] BYREF
  __int16 v23; // [esp+9Ah] [ebp-DAh]
  int v24; // [esp+9Ch] [ebp-D8h]
  int v25; // [esp+A0h] [ebp-D4h]
  char v26; // [esp+A4h] [ebp-D0h] BYREF
  CPPEH_RECORD ms_exc; // [esp+15Ch] [ebp-18h]

  v16 = a2;
  v13 = a1;
  v14 = a3;
  UnicodeString = a4;
  v15 = a5;
  v20 = 0;
  v23 = 0;
  v21 = 0;
  v12[0] = 64;
  memset(&v12[1], 0, 0x3Cu);
  v11[0] = 36;
  v11[1] = 1;
  memset(&v11[2], 0, 0x1Cu);
  ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(1, a1, 0, a3, a4, a5, &v21, 0, 0);
  if ( ActivationContextSectionString >= 0 )
  {
    if ( LdrpCreateActCtxLanguageW )
    {
      if ( (v21 & 1) == 0 )
      {
        ActivationContextSectionString = RtlFindActivationContextSectionString(7, 0, 2, v13, v12);
        if ( ActivationContextSectionString >= 0 )
        {
          if ( v12[1] != 1 )
            return -1072365563;
          if ( (v12[10] & 1) != 0 )
          {
            v12[8] = 0;
          }
          else if ( (v12[10] & 2) != 0 )
          {
            v12[8] = -4;
          }
          v23 = *(_WORD *)(v12[11] + 92);
          v22 = v23;
          v24 = v12[12] + *(_DWORD *)(v12[11] + 96);
          UnicodeString = (PUNICODE_STRING)&v26;
          v18 = 170;
          ActivationContextSectionString = RtlLcidToLocaleName((unsigned __int16)v16, v17, 2, 0);
          if ( ActivationContextSectionString >= 0 )
          {
            if ( RtlCompareUnicodeString(&v22, v17, 1) )
            {
              v8 = LdrpCreateActCtxLanguageW(LdrpCreateActCtxLanguageW, v12[8], v16, &v20);
              ActivationContextSectionString = v8;
              v25 = v8;
              if ( v8 >= 0 )
              {
                v9 = v20;
                if ( v20 == -1 )
                {
LABEL_27:
                  ms_exc.registration.TryLevel = 1;
                  if ( LdrpReleaseActCtxW )
                    LdrpReleaseActCtxW(LdrpReleaseActCtxW, v9);
                  ms_exc.registration.TryLevel = -2;
                  return ActivationContextSectionString;
                }
                RtlActivateActivationContextUnsafeFast(v11, v20);
                ms_exc.registration.TryLevel = 0;
                if ( a4->Buffer )
                  RtlFreeAnsiString(a4);
                v10 = v13;
                ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                                   0,
                                                   v13,
                                                   0,
                                                   v14,
                                                   a4,
                                                   v15,
                                                   &v21,
                                                   0,
                                                   0);
                v25 = ActivationContextSectionString;
                if ( ActivationContextSectionString >= 0 )
                {
                  ActivationContextSectionString = RtlFindActivationContextSectionString(7, 0, 2, v10, v12);
                  v25 = ActivationContextSectionString;
                  if ( ActivationContextSectionString >= 0 )
                  {
                    if ( v12[1] != 1 )
                    {
                      ActivationContextSectionString = -1072365563;
LABEL_25:
                      v25 = ActivationContextSectionString;
                      goto LABEL_26;
                    }
                    v23 = *(_WORD *)(v12[11] + 92);
                    v22 = v23;
                    v24 = v12[12] + *(_DWORD *)(v12[11] + 96);
                    if ( RtlCompareUnicodeString(&v22, v17, 1) )
                    {
                      ActivationContextSectionString = -1072365564;
                      goto LABEL_25;
                    }
                  }
                }
LABEL_26:
                ms_exc.registration.TryLevel = -2;
                RtlDeactivateActivationContextUnsafeFast(v11);
                v9 = v20;
                goto LABEL_27;
              }
            }
          }
        }
      }
    }
  }
  return ActivationContextSectionString;
}
