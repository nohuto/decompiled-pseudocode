/*
 * XREFs of _LdrpLogLoadFailureEtwEvent@20 @ 0x4B2EC106
 * Callers:
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 *     _LdrpProcessWork@8 @ 0x4B2CE6E8 (_LdrpProcessWork@8.c)
 * Callees:
 *     _EtwEventWriteNoRegistration@16 @ 0x4B2ABD30 (_EtwEventWriteNoRegistration@16.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlGetThreadErrorMode@0 @ 0x4B32E4B0 (_RtlGetThreadErrorMode@0.c)
 */

void __fastcall LdrpLogLoadFailureEtwEvent(unsigned __int16 *a1, unsigned __int16 *a2, char a3, int *a4, char a5)
{
  int *v5; // ebx
  char v8; // al
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // [esp+Ch] [ebp-3Ch] BYREF
  _DWORD v13[13]; // [esp+10h] [ebp-38h] BYREF

  v5 = a4;
  v12 = 0;
  if ( (LdrpPolicyBits & 0x20) != 0 )
  {
    if ( a5
      || (RtlGetThreadErrorMode() & 0x10) == 0
      && ((int)ZwQueryInformationProcess(-1, 12, &v12, 4, 0) >= 0 ? (v8 = v12) : (v8 = 1, v12 = 1), (v8 & 1) != 0) )
    {
      v9 = *((_DWORD *)a1 + 1);
      v10 = *a1 + 2;
      v13[1] = 0;
      v13[2] = 4;
      v13[3] = 0;
      v13[4] = v9;
      v13[5] = 0;
      v13[6] = v10;
      v13[7] = 0;
      v13[0] = &a3;
      if ( a2 )
      {
        v13[8] = *((_DWORD *)a2 + 1);
        v11 = *a2;
        v13[9] = 0;
        v13[10] = v11 + 2;
        v13[11] = 0;
        EtwEventWriteNoRegistration((int)UserLoaderGuid, v5, 3, (int)v13);
      }
      else
      {
        EtwEventWriteNoRegistration((int)UserLoaderGuid, v5, 2, (int)v13);
      }
    }
  }
}
