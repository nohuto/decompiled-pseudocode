/*
 * XREFs of _LdrVerifyImageMatchesChecksumEx@8 @ 0x4B32F0B0
 * Callers:
 *     _LdrVerifyImageMatchesChecksum@16 @ 0x4B32F040 (_LdrVerifyImageMatchesChecksum@16.c)
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryInformationFile@20 @ 0x4B2F2A70 (_ZwQueryInformationFile@20.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _NtMakeTemporaryObject@4 @ 0x4B2F3A70 (_NtMakeTemporaryObject@4.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _LdrVerifyImageMatchesChecksumEx@8 @ 0x4B32F0B0 (_LdrVerifyImageMatchesChecksumEx@8.c)
 *     _LdrpGenericExceptionFilter@8 @ 0x4B334947 (_LdrpGenericExceptionFilter@8.c)
 *     _RtlImageRvaToVa@16 @ 0x4B34D310 (_RtlImageRvaToVa@16.c)
 *     _LdrVerifyMappedImageMatchesChecksum@12 @ 0x4B35A6EF (_LdrVerifyMappedImageMatchesChecksum@12.c)
 */

int __stdcall LdrVerifyImageMatchesChecksumEx(int a1, int a2)
{
  int v2; // esi
  int result; // eax
  int InformationFile; // edi
  void *v5; // ecx
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // [esp+10h] [ebp-68h]
  int v11; // [esp+14h] [ebp-64h] BYREF
  int v12; // [esp+18h] [ebp-60h]
  _DWORD *v13; // [esp+1Ch] [ebp-5Ch]
  _BYTE v14[4]; // [esp+20h] [ebp-58h] BYREF
  int v15; // [esp+24h] [ebp-54h] BYREF
  int v16; // [esp+28h] [ebp-50h] BYREF
  unsigned int v17; // [esp+2Ch] [ebp-4Ch] BYREF
  HANDLE Handle; // [esp+30h] [ebp-48h] BYREF
  int *v19; // [esp+34h] [ebp-44h]
  unsigned int v20; // [esp+38h] [ebp-40h] BYREF
  int v21; // [esp+3Ch] [ebp-3Ch]
  _BYTE v22[8]; // [esp+40h] [ebp-38h] BYREF
  int v23; // [esp+48h] [ebp-30h]
  CPPEH_RECORD ms_exc; // [esp+60h] [ebp-18h]

  v11 = a1;
  v2 = a2;
  v12 = a2;
  if ( *(_DWORD *)a2 != 40 || (*(_DWORD *)(a2 + 4) & 0xFFFFFFF8) != 0 )
    return -1073741584;
  if ( (*(_BYTE *)(a2 + 4) & 2) != 0 )
    v19 = (int *)(a2 + 16);
  else
    v19 = &dword_4B2917E4;
  v10 = v19[4] & 0x1000000;
  LOBYTE(v16) = v10 != 0;
  v15 = a1 & 1;
  result = NtCreateSection((int)&Handle, v19[1], v19[2], 0, v19[3], v19[4], a1);
  v21 = result;
  if ( result >= 0 )
  {
    v20 = 0;
    v17 = 0;
    ms_exc.registration.TryLevel = 0;
    InformationFile = ZwMapViewOfSection((int)Handle, -1, (int)&v20, 0, 0, 0, (int)&v17, 1, 0, 16);
    v21 = InformationFile;
    if ( InformationFile >= 0 )
    {
      ms_exc.registration.TryLevel = 1;
      if ( (_BYTE)v15 )
        goto LABEL_13;
      InformationFile = ZwQueryInformationFile(v11, (int)v14, (int)v22, 24, 5);
      v21 = InformationFile;
      if ( InformationFile >= 0 )
      {
        ms_exc.registration.TryLevel = 2;
        if ( !(unsigned __int8)LdrVerifyMappedImageMatchesChecksum(v23) )
        {
          InformationFile = -1073741279;
          v21 = -1073741279;
        }
        ms_exc.registration.TryLevel = 1;
        if ( InformationFile >= 0 )
        {
LABEL_13:
          if ( (*(_BYTE *)(a2 + 4) & 5) != 0 )
          {
            ms_exc.registration.TryLevel = 3;
            InformationFile = RtlImageNtHeaderEx(0, v20, v17, 0, &v15);
            v21 = InformationFile;
            if ( InformationFile >= 0 )
            {
              if ( (*(_BYTE *)(a2 + 4) & 4) != 0 )
                *(_WORD *)(a2 + 36) = *(_WORD *)(v15 + 22);
              if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
              {
                if ( *(_DWORD *)(a2 + 8) )
                {
                  v6 = RtlImageDirectoryEntryToData(v5, v20, v16, 1, (int)&v11);
                  v13 = v6;
                  if ( v6 )
                  {
                    v16 = 0;
                    while ( 1 )
                    {
                      v7 = v6[3];
                      if ( !v7 )
                        break;
                      if ( v10 )
                        v8 = v7 + v20;
                      else
                        v8 = RtlImageRvaToVa(v15, v20, v7, &v16);
                      (*(void (__thiscall **)(_DWORD, _DWORD, int))(v2 + 8))(
                        *(_DWORD *)(v2 + 8),
                        *(_DWORD *)(v2 + 12),
                        v8);
                      v6 = v13 + 5;
                      v13 += 5;
                      v2 = v12;
                    }
                  }
                }
              }
            }
            ms_exc.registration.TryLevel = 1;
          }
        }
      }
      ms_exc.registration.TryLevel = 0;
      NtUnmapViewOfSection(-1, v20);
    }
    ms_exc.registration.TryLevel = -2;
    if ( InformationFile < 0 || v19 == &dword_4B2917E4 )
    {
      v9 = v19[2];
      if ( v9 && (*(_BYTE *)(v9 + 12) & 0x10) != 0 )
        NtMakeTemporaryObject((int)Handle);
      NtClose(Handle);
    }
    else
    {
      *v19 = (int)Handle;
    }
    return InformationFile;
  }
  return result;
}
