/*
 * XREFs of _RtlDoesFileExists_UstrEx@8 @ 0x4B2E318E
 * Callers:
 *     _RtlDosSearchPath_Ustr@36 @ 0x4B2C5170 (_RtlDosSearchPath_Ustr@36.c)
 *     _RtlDoesFileExists_UEx@8 @ 0x4B2E3164 (_RtlDoesFileExists_UEx@8.c)
 *     sxsisol_RespectDotLocal @ 0x4B33D7A3 (sxsisol_RespectDotLocal.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryAttributesFile@8 @ 0x4B2F2D50 (_ZwQueryAttributesFile@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

bool __fastcall RtlDoesFileExists_UstrEx(int *a1, char a2)
{
  char v2; // bl
  int v3; // eax
  int AttributesFile; // eax
  volatile signed __int32 *v5; // edi
  int v6; // esi
  int v9; // [esp+14h] [ebp-64h] BYREF
  int v10; // [esp+18h] [ebp-60h]
  int v11; // [esp+1Ch] [ebp-5Ch]
  _DWORD v12[3]; // [esp+20h] [ebp-58h] BYREF
  volatile signed __int32 *v13; // [esp+2Ch] [ebp-4Ch]
  _DWORD v14[6]; // [esp+30h] [ebp-48h] BYREF
  _BYTE v15[44]; // [esp+48h] [ebp-30h] BYREF

  v2 = 0;
  if ( RtlpDosPathNameToRelativeNtPathName(2, a1, 0, (unsigned __int16 *)&v9, 0, 0, v12) < 0 )
    return 0;
  v11 = v10;
  if ( LOWORD(v12[0]) )
  {
    v9 = v12[0];
    v10 = v12[1];
    v3 = v12[2];
  }
  else
  {
    v3 = 0;
  }
  v14[1] = v3;
  v14[2] = &v9;
  v14[0] = 24;
  v14[3] = 64;
  v14[4] = 0;
  v14[5] = 0;
  AttributesFile = ZwQueryAttributesFile(v14, v15);
  v5 = v13;
  v6 = AttributesFile;
  if ( v13 && !_InterlockedExchangeAdd(v13, 0xFFFFFFFF) )
  {
    NtClose(*((HANDLE *)v5 + 1));
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v5);
  }
  RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v11);
  if ( v6 >= 0 )
    return 1;
  if ( v6 == -1073741757 || v6 == -1073741790 )
    return a2 != 0;
  return v2;
}
