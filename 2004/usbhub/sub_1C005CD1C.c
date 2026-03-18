/*
 * XREFs of sub_1C005CD1C @ 0x1C005CD1C
 * Callers:
 *     sub_1C005D550 @ 0x1C005D550 (sub_1C005D550.c)
 *     sub_1C005D898 @ 0x1C005D898 (sub_1C005D898.c)
 * Callees:
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0051AFC @ 0x1C0051AFC (sub_1C0051AFC.c)
 *     sub_1C005DB5C @ 0x1C005DB5C (sub_1C005DB5C.c)
 *     sub_1C005DBD8 @ 0x1C005DBD8 (sub_1C005DBD8.c)
 */

__int64 __fastcall sub_1C005CD1C(_DWORD *a1, const wchar_t *a2)
{
  __int64 v4; // rax
  SIZE_T v5; // rsi
  wchar_t *PoolWithTag; // rax
  wchar_t *v7; // rbp
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  wchar_t *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rax
  HANDLE Handle; // [rsp+80h] [rbp+18h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h]

  Handle = 0LL;
  P = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 2 * v4 + 146;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag((POOL_TYPE)512, v5, 0x55445246u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    wcscpy_s(PoolWithTag, v5, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USBFN\\Configurations\\");
    wcscat_s(v7, v5, a2);
    v8 = sub_1C005DB5C(v9, v7, &Handle);
    if ( v8 >= 0 )
    {
      v11 = sub_1C005DBD8(Handle);
      v12 = (wchar_t *)P;
      v8 = v11;
      if ( v11 >= 0 )
      {
        LODWORD(v13) = 0;
        if ( *(_WORD *)P )
        {
          do
          {
            if ( *a1 == 14 )
              break;
            if ( (*a1 & 2) != 0 || wcsicmp(&v12[(unsigned int)v13], L"MTP") )
            {
              if ( (*(_BYTE *)a1 & 4) != 0 || wcsicmp(&v12[(unsigned int)v13], L"IpOverUsb") )
              {
                if ( (*(_BYTE *)a1 & 8) == 0 && !wcsicmp(&v12[(unsigned int)v13], L"VidStream") )
                  *a1 |= 8u;
              }
              else
              {
                *a1 |= 4u;
              }
            }
            else
            {
              *a1 |= 2u;
            }
            v14 = -1LL;
            do
              ++v14;
            while ( v12[(unsigned int)v13 + v14] );
            v13 = (unsigned int)(v14 + v13 + 1);
          }
          while ( v12[v13] );
        }
      }
      else if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
      {
        sub_1C002E188((__int64)DeviceObject->DeviceExtension, 3u, 1u, 0x1Cu, (__int64)&unk_1C0065940, v11);
      }
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
    }
    else if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      sub_1C0051AFC((__int64)DeviceObject->DeviceExtension, 4u, v10, 0x1Bu, (__int64)&unk_1C0065940, v7, v8);
    }
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v8 = -1073741670;
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
      sub_1C002E188((__int64)DeviceObject->DeviceExtension, 3u, 1u, 0x1Au, (__int64)&unk_1C0065940, -1073741670);
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}
