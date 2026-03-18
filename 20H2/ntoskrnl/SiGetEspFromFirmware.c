/*
 * XREFs of SiGetEspFromFirmware @ 0x140976890
 * Callers:
 *     SiGetEfiSystemDevice @ 0x1409764B8 (SiGetEfiSystemDevice.c)
 * Callees:
 *     _wcsicmp @ 0x1403D1760 (_wcsicmp.c)
 *     ZwEnumerateBootEntries @ 0x1403F9D50 (ZwEnumerateBootEntries.c)
 *     ZwQueryBootEntryOrder @ 0x1403FA970 (ZwQueryBootEntryOrder.c)
 *     ZwQueryBootOptions @ 0x1403FA990 (ZwQueryBootOptions.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     BiReleasePrivilege @ 0x140781E58 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140781EB0 (BiAcquirePrivilege.c)
 *     SiBootEntryGetNtFilePath @ 0x14097632C (SiBootEntryGetNtFilePath.c)
 *     SiGetEfiBootEntryById @ 0x140976498 (SiGetEfiBootEntryById.c)
 *     SiIsValidWindowsBootEntry @ 0x140976CB0 (SiIsValidWindowsBootEntry.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetEspFromFirmware(void *a1, int a2)
{
  unsigned int v2; // r14d
  void *v3; // r15
  void *v4; // r12
  int *v5; // r13
  wchar_t *v6; // rdi
  wchar_t *v7; // rsi
  __int64 result; // rax
  signed int BootEntryOrder; // ebx
  PVOID PoolWithTag; // rax
  unsigned int v11; // eax
  int *v12; // rax
  unsigned int v13; // r14d
  int BootOptions; // eax
  unsigned int *EfiBootEntryById; // rax
  unsigned int *v16; // r14
  int NtFilePath; // eax
  char IsValidWindowsBootEntry; // al
  unsigned int v19; // r14d
  PVOID v20; // rax
  unsigned int v21; // ebx
  unsigned int *v22; // rax
  unsigned int *v23; // r14
  int v24; // eax
  _WORD *v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // ecx
  PVOID P; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v29[4]; // [rsp+28h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+88h] [rbp+50h] BYREF
  unsigned int v32; // [rsp+90h] [rbp+58h] BYREF
  PVOID v33; // [rsp+98h] [rbp+60h] BYREF

  LODWORD(NumberOfBytes) = a2;
  v2 = 0;
  v32 = 0;
  v3 = 0LL;
  *(_QWORD *)v29 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  P = 0LL;
  v33 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  result = BiAcquirePrivilege(0x16u, (__int64)v29);
  if ( (int)result >= 0 )
  {
    LODWORD(NumberOfBytes) = 0;
    BootEntryOrder = ZwEnumerateBootEntries(0LL, (__int64)&NumberOfBytes);
    if ( BootEntryOrder == -1073741789 )
    {
      while ( v2 < (unsigned int)NumberOfBytes )
      {
        if ( v3 )
          ExFreePoolWithTag(v3, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B505953u);
        v3 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_11;
        v2 = NumberOfBytes;
        BootEntryOrder = ZwEnumerateBootEntries((__int64)PoolWithTag, (__int64)&NumberOfBytes);
        if ( BootEntryOrder != -1073741789 )
          break;
      }
    }
    if ( BootEntryOrder >= 0 )
    {
      if ( (_DWORD)NumberOfBytes )
      {
        v11 = 24;
        LODWORD(NumberOfBytes) = 24;
        while ( 1 )
        {
          if ( v5 )
          {
            ExFreePoolWithTag(v5, 0);
            v11 = NumberOfBytes;
          }
          v12 = (int *)ExAllocatePoolWithTag(PagedPool, v11, 0x4B505953u);
          v5 = v12;
          if ( !v12 )
            break;
          v13 = NumberOfBytes;
          BootOptions = ZwQueryBootOptions((__int64)v12, (__int64)&NumberOfBytes);
          BootEntryOrder = BootOptions;
          if ( BootOptions != -1073741789 )
          {
            if ( BootOptions < 0 )
              goto LABEL_45;
            EfiBootEntryById = SiGetEfiBootEntryById((unsigned int *)v3, v5[3]);
            v16 = EfiBootEntryById;
            if ( EfiBootEntryById
              && (NtFilePath = SiBootEntryGetNtFilePath((__int64)EfiBootEntryById, &P),
                  v6 = (wchar_t *)P,
                  BootEntryOrder = NtFilePath,
                  NtFilePath >= 0) )
            {
              IsValidWindowsBootEntry = SiIsValidWindowsBootEntry(v16, P);
              v19 = 0;
              if ( IsValidWindowsBootEntry )
                goto LABEL_45;
              ExFreePoolWithTag(v6, 0);
              v6 = 0LL;
            }
            else
            {
              v19 = 0;
            }
            BootEntryOrder = ZwQueryBootEntryOrder(0LL, (__int64)&v32);
            if ( BootEntryOrder == -1073741789 )
            {
              while ( v19 < v32 )
              {
                if ( v4 )
                  ExFreePoolWithTag(v4, 0);
                v20 = ExAllocatePoolWithTag(PagedPool, 4LL * v32, 0x4B505953u);
                v4 = v20;
                if ( !v20 )
                  goto LABEL_11;
                v19 = v32;
                BootEntryOrder = ZwQueryBootEntryOrder((__int64)v20, (__int64)&v32);
                if ( BootEntryOrder != -1073741789 )
                  break;
              }
            }
            if ( !BootEntryOrder )
            {
              if ( !v32 )
                goto LABEL_10;
              v21 = 0;
              do
              {
                v22 = SiGetEfiBootEntryById((unsigned int *)v3, *((_DWORD *)v4 + v21));
                v23 = v22;
                if ( v22 )
                {
                  v24 = SiBootEntryGetNtFilePath((__int64)v22, &v33);
                  v7 = (wchar_t *)v33;
                  if ( v24 >= 0 && (unsigned __int8)SiIsValidWindowsBootEntry(v23, v33) )
                  {
                    if ( v6 )
                    {
                      if ( wcsicmp(v6 + 6, v7 + 6) )
                      {
                        BootEntryOrder = -1073740719;
                        goto LABEL_45;
                      }
                    }
                    else
                    {
                      v6 = v7;
                      v33 = 0LL;
                      v7 = 0LL;
                    }
                  }
                  if ( v7 )
                  {
                    ExFreePoolWithTag(v7, 0);
                    v7 = 0LL;
                    v33 = 0LL;
                  }
                }
                ++v21;
              }
              while ( v21 < v32 );
              BootEntryOrder = v6 == 0LL ? 0xC0000225 : 0;
            }
            goto LABEL_45;
          }
          v11 = NumberOfBytes;
          if ( v13 >= (unsigned int)NumberOfBytes )
            goto LABEL_45;
        }
LABEL_11:
        BootEntryOrder = -1073741801;
      }
      else
      {
LABEL_10:
        BootEntryOrder = -1073741275;
      }
    }
LABEL_45:
    BiReleasePrivilege(v29);
    if ( BootEntryOrder >= 0 )
    {
      if ( v6 )
      {
        v25 = v6 + 6;
        v26 = -1LL;
        do
          ++v26;
        while ( v25[v26] );
        v27 = 2 * v26 + 2;
        LODWORD(NumberOfBytes) = v27;
        if ( v27 <= 0x6A )
          memmove(a1, v25, v27);
        else
          BootEntryOrder = -1073741789;
      }
      else
      {
        BootEntryOrder = -1073741823;
      }
    }
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    return (unsigned int)BootEntryOrder;
  }
  return result;
}
