/*
 * XREFs of ?RtlUnicodeStringCopy@@YGJPAU_UNICODE_STRING@@PBU1@@Z @ 0xD9756
 * Callers:
 *     ?OpenDeviceCfgKey@@YGJKPAGKPAPAXH@Z @ 0x9CFD8 (-OpenDeviceCfgKey@@YGJKPAGKPAPAXH@Z.c)
 *     ?_OpenDeviceKey@InteractiveControlSettings@@IAEJKHPAPAX@Z @ 0xD7654 (-_OpenDeviceKey@InteractiveControlSettings@@IAEJKHPAPAX@Z.c)
 *     ?zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0xD8F80 (-zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCurso.c)
 *     _ReadTiltCalibrationData@12 @ 0x13ED9B (_ReadTiltCalibrationData@12.c)
 *     _WriteTiltCalibrationData@20 @ 0x13F29A (_WriteTiltCalibrationData@20.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x9998E (RtlUnicodeStringValidateWorker.c)
 *     RtlUnicodeStringValidateDestWorker @ 0xD77EC (RtlUnicodeStringValidateDestWorker.c)
 *     RtlWideCharArrayCopyWorker @ 0xEF378 (RtlWideCharArrayCopyWorker.c)
 */

NTSTATUS __usercall RtlUnicodeStringCopy@<eax>(unsigned __int16 *a1@<edx>, size_t *a2@<ecx>, size_t a3@<ebx>)
{
  wchar_t v3; // si
  const UNICODE_STRING *v5; // eax
  NTSTATUS v6; // ecx
  size_t *v7; // ebx
  size_t v8; // eax
  NTSTATUS v9; // eax
  const wchar_t *v12; // [esp-4h] [ebp-1Ch]
  size_t v13; // [esp+0h] [ebp-18h]
  ULONG v14; // [esp+0h] [ebp-18h]
  size_t v15; // [esp+0h] [ebp-18h]
  ULONG v16; // [esp+4h] [ebp-14h]
  wchar_t pszDest[2]; // [esp+Ch] [ebp-Ch] BYREF
  int v19; // [esp+10h] [ebp-8h]
  UNICODE_STRING DestinationString; // [esp+14h] [ebp-4h] BYREF

  v3 = 0;
  v19 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  v5 = (const UNICODE_STRING *)RtlUnicodeStringValidateDestWorker(&DestinationString, 0, a2, a2, v13, v16);
  v6 = (NTSTATUS)v5;
  if ( (int)v5 >= 0 )
  {
    *(_DWORD *)pszDest = 0;
    v7 = 0;
    v6 = RtlUnicodeStringValidateWorker(v5, a3, v14);
    if ( v6 >= 0 && a1 )
    {
      v8 = *((_DWORD *)a1 + 1);
      v7 = (size_t *)(*a1 >> 1);
    }
    else
    {
      v8 = 0;
    }
    if ( v6 >= 0 )
    {
      v9 = RtlWideCharArrayCopyWorker(pszDest, v8, v7, v12, v15);
      v3 = pszDest[0];
      v6 = v9;
    }
    *(_WORD *)a2 = 2 * v3;
  }
  return v6;
}
