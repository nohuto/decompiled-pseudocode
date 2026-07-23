/*
 * XREFs of PiDevCfgQueryObjectProperties @ 0x14073D004
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x140730028 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x140730398 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgProcessDevice @ 0x140739F50 (PiDevCfgProcessDevice.c)
 *     PiDevCfgLogDeviceStarted @ 0x14073AF94 (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073B250 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgInitDeviceContext @ 0x14073BBF0 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgGetDriverPackageId @ 0x14073C3A8 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryDriverNode @ 0x14073C9B4 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgConfigureDevice @ 0x140742FE0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14076C014 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A507C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A5F64 (PiDevCfgFindDeviceMigrationNode.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408AAA4C (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgInit @ 0x140A53024 (PpDevCfgInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PnpValidateMultiSzData @ 0x14036F0B8 (PnpValidateMultiSzData.c)
 *     PnpValidateStringData @ 0x14036F128 (PnpValidateStringData.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExpAllocateStringRoutine @ 0x1406006F0 (ExpAllocateStringRoutine.c)
 *     _PnpOpenObjectRegKey @ 0x14062C674 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryObjectProperties(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // r10
  int ObjectProperty; // ebx
  void *v8; // r15
  unsigned int v9; // r13d
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // r14
  UNICODE_STRING *v13; // rsi
  unsigned int MaximumLength; // r12d
  HANDLE v15; // r9
  SIZE_T v17; // rdx
  PVOID PoolWithTag; // rax
  wchar_t *StringRoutine; // rax
  wchar_t *Buffer; // rdx
  int v21; // eax
  PVOID v22; // rax
  int v23; // [rsp+68h] [rbp-19h] BYREF
  int v24; // [rsp+6Ch] [rbp-15h]
  HANDLE Handle; // [rsp+70h] [rbp-11h] BYREF
  __int64 v26; // [rsp+78h] [rbp-9h]
  unsigned int Size; // [rsp+D8h] [rbp+57h] BYREF
  int Size_4; // [rsp+DCh] [rbp+5Bh]
  __int64 v29; // [rsp+E0h] [rbp+5Fh]
  unsigned int v30; // [rsp+E8h] [rbp+67h]
  void *v31; // [rsp+F0h] [rbp+6Fh]

  v31 = a4;
  v30 = a3;
  v29 = a2;
  Size_4 = HIDWORD(a1);
  v6 = 0LL;
  v26 = *(_QWORD *)&PiPnpRtlCtx;
  ObjectProperty = 0;
  Handle = 0LL;
  v8 = 0LL;
  v23 = 1;
  v9 = 0;
  Size = 0;
  if ( !a4 )
  {
    v21 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a2, a3, 33554433, 0, (__int64)&Handle);
    v6 = 0LL;
    ObjectProperty = v21;
    if ( v21 < 0 )
      goto LABEL_23;
  }
  v24 = 0;
  if ( !a6 )
    goto LABEL_23;
  v10 = a5 + 8;
  while ( 2 )
  {
    v11 = *(_DWORD *)(v10 + 20);
    v12 = *(_QWORD *)(v10 + 8);
    if ( (v11 & 4) != 0 )
    {
      v13 = *(UNICODE_STRING **)(v10 + 8);
      v12 = *(_QWORD *)(v12 + 8);
      MaximumLength = v13->MaximumLength;
    }
    else
    {
      MaximumLength = *(_DWORD *)(v10 + 16);
      v13 = (UNICODE_STRING *)v6;
    }
    if ( (v11 & 2) != 0 )
    {
      if ( v8
        || (v9 = 260,
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x104uLL, 0x63647050u),
            v6 = 0LL,
            (v8 = PoolWithTag) != 0LL) )
      {
        v12 = (__int64)v8;
        goto LABEL_9;
      }
      ObjectProperty = -1073741670;
      goto LABEL_23;
    }
    while ( 1 )
    {
      v15 = Handle;
      if ( v31 )
        v15 = v31;
      ObjectProperty = PnpGetObjectProperty(
                         v26,
                         v29,
                         v30,
                         (__int64)v15,
                         v6,
                         *(_QWORD *)(v10 - 8),
                         (__int64)&v23,
                         v12,
                         MaximumLength,
                         (__int64)&Size,
                         v6);
      if ( ObjectProperty != -1073741789 )
      {
        v6 = 0LL;
        goto LABEL_14;
      }
      if ( (*(_DWORD *)(v10 + 20) & 2) == 0 )
        goto LABEL_66;
      if ( Size <= MaximumLength )
      {
        ObjectProperty = -1073741595;
LABEL_66:
        v6 = 0LL;
        goto LABEL_16;
      }
      ExFreePoolWithTag(v8, 0);
      v9 = Size;
      v22 = ExAllocatePoolWithTag(PagedPool, Size, 0x63647050u);
      v6 = 0LL;
      v8 = v22;
      if ( !v22 )
        break;
      v12 = (__int64)v22;
LABEL_9:
      MaximumLength = v9;
    }
    ObjectProperty = -1073741670;
LABEL_14:
    if ( ObjectProperty == -1073741670 )
      break;
    if ( ObjectProperty >= 0 )
    {
      v17 = Size;
      if ( v23 )
      {
        if ( v23 != *(_DWORD *)v10 )
        {
          ObjectProperty = -1073741823;
          goto LABEL_16;
        }
        if ( v23 == 18 || v23 == 20 || v23 == 25 )
        {
          if ( !PnpValidateStringData(v12, Size) )
            ObjectProperty = -1073741823;
        }
        else if ( v23 == 8210 && !PnpValidateMultiSzData((_WORD *)v12, Size) )
        {
          ObjectProperty = -1073741823;
        }
      }
      else
      {
        *(_DWORD *)v10 = 0;
      }
      if ( ObjectProperty >= 0 )
      {
        if ( v13 && (unsigned int)v17 > 0xFFFE )
          ObjectProperty = -2147483643;
        if ( ObjectProperty >= 0 )
        {
          if ( (*(_DWORD *)(v10 + 20) & 2) == 0 )
            goto LABEL_37;
          if ( v13 )
          {
            StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v17);
            v13->Buffer = StringRoutine;
            if ( StringRoutine )
            {
              v13->MaximumLength = Size;
LABEL_49:
              memmove(StringRoutine, v8, Size);
              LODWORD(v17) = Size;
              v6 = 0LL;
LABEL_37:
              if ( v13 )
              {
                v13->Length = v17;
                if ( v23 != 8210 )
                {
                  Buffer = v13->Buffer;
                  if ( Buffer )
                  {
                    if ( (unsigned __int16)Size >= 2u
                      && Buffer[((unsigned __int64)(unsigned __int16)Size >> 1) - 1] == (_WORD)v6 )
                    {
                      v13->Length = Size - 2;
                    }
                  }
                }
              }
              else
              {
                if ( (*(_DWORD *)(v10 + 20) & 2) != 0 )
                {
                  **(_QWORD **)(v10 + 8) = v12;
                  LODWORD(v17) = Size;
                }
                *(_DWORD *)(v10 + 16) = v17;
              }
              goto LABEL_16;
            }
          }
          else
          {
            StringRoutine = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v17, 0x63647050u);
            v12 = (__int64)StringRoutine;
            if ( StringRoutine )
              goto LABEL_49;
          }
          ObjectProperty = -1073741670;
          break;
        }
      }
    }
LABEL_16:
    *(_DWORD *)(v10 + 24) = ObjectProperty;
    if ( ObjectProperty < 0 )
    {
      if ( (*(_DWORD *)(v10 + 20) & 8) == 0 )
      {
LABEL_18:
        if ( (*(_DWORD *)(v10 + 20) & 1) != 0 )
          break;
        ObjectProperty = v6;
        goto LABEL_20;
      }
      if ( v13 )
      {
        RtlInitUnicodeString(v13, 0LL);
      }
      else
      {
        if ( !v12 )
          goto LABEL_18;
        memset((void *)v12, 0, MaximumLength);
      }
      v6 = 0LL;
      goto LABEL_18;
    }
LABEL_20:
    v10 += 40LL;
    if ( ++v24 < a6 )
      continue;
    break;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)ObjectProperty;
}
