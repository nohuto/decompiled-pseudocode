/*
 * XREFs of GetNameFromPath @ 0x1C00602D0
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x1C0041194 (FxLibraryCommonRegisterClient.c)
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C0041DE4 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C0042358 (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 *     GetImageName @ 0x1C005F478 (GetImageName.c)
 * Callees:
 *     <none>
 */

void __fastcall GetNameFromPath(const _UNICODE_STRING *Path, _UNICODE_STRING *Name)
{
  __int64 Length; // rcx
  wchar_t *v4; // rax
  wchar_t *v5; // rax
  unsigned __int16 v6; // cx
  char v7; // r9

  if ( Path->Length >= 2u )
  {
    Length = Path->Length;
    v4 = Path->Buffer - 1;
    Name->Length = 2;
    v5 = (wchar_t *)((char *)v4 + Length);
    v6 = 2;
    v7 = 0;
    while ( 1 )
    {
      Name->Buffer = v5;
      if ( v5 < Path->Buffer )
        break;
      if ( *v5 == 92 )
      {
        ++v5;
        v7 = 1;
        v6 -= 2;
        Name->Buffer = v5;
        Name->Length = v6;
        if ( !v6 )
        {
          Name->Buffer = 0LL;
          v6 = 0;
          goto LABEL_9;
        }
        break;
      }
      --v5;
      v6 += 2;
      Name->Length = v6;
    }
    if ( !v7 )
    {
      v6 -= 2;
      Name->Length = v6;
      Name->Buffer = v5 + 1;
    }
LABEL_9:
    Name->MaximumLength = v6;
  }
  else
  {
    *Name = 0LL;
  }
}
