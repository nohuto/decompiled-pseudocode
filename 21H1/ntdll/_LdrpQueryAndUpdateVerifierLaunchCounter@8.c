/*
 * XREFs of _LdrpQueryAndUpdateVerifierLaunchCounter@8 @ 0x4B333771
 * Callers:
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 * Callees:
 *     _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80 (_RtlQueryImageFileKeyOption@24.c)
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwSetValueKey@24 @ 0x4B2F2F80 (_ZwSetValueKey@24.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __fastcall LdrpQueryAndUpdateVerifierLaunchCounter(unsigned __int16 *a1, _DWORD *a2)
{
  __int16 v3; // si
  int v4; // edx
  int v5; // ebx
  int v6; // eax
  int v8; // esi
  UNICODE_STRING DestinationString; // [esp+Ch] [ebp-1Ch] BYREF
  _WORD v10[2]; // [esp+14h] [ebp-14h] BYREF
  int v11; // [esp+18h] [ebp-10h]
  int v12; // [esp+1Ch] [ebp-Ch] BYREF
  int v13; // [esp+20h] [ebp-8h] BYREF
  HANDLE Handle; // [esp+24h] [ebp-4h] BYREF

  v3 = *a1;
  v4 = *a1;
  v5 = 0;
  v6 = v4 + *((_DWORD *)a1 + 1);
  if ( *a1 )
  {
    do
    {
      if ( *(_WORD *)(v6 - 2) == 92 )
        break;
      v6 -= 2;
      v4 -= 2;
    }
    while ( v4 );
  }
  v11 = v6;
  v10[0] = v3 - v4;
  v10[1] = v3 - v4 + 2;
  RtlInitUnicodeString(&DestinationString, L"\\VerifierCounter");
  if ( RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 11, 0, &Handle) < 0 )
  {
    if ( RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 9, 0, &Handle) < 0 )
    {
      *a2 = 1;
      return 0;
    }
    v5 = 1;
  }
  v8 = RtlQueryImageFileKeyOption((int)Handle, v11, 4, a2, 4u, &v12);
  if ( v8 >= 0 )
  {
    if ( v5 || !*a2 )
      goto LABEL_14;
    v13 = *a2 - 1;
    ZwSetValueKey((int)Handle, (int)v10, 0, 4, (int)&v13, 4);
  }
  else
  {
    *a2 = 1;
  }
  v8 = 0;
LABEL_14:
  NtClose(Handle);
  return v8;
}
