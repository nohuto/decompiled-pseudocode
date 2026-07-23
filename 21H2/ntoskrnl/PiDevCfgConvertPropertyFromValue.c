/*
 * XREFs of PiDevCfgConvertPropertyFromValue @ 0x1407349AC
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x140769FCC (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgConvertPropertyFromValue(
        unsigned int a1,
        int a2,
        wchar_t *a3,
        unsigned int a4,
        int *a5,
        _QWORD *a6)
{
  unsigned int v6; // edi
  int v8; // esi
  _BYTE *v9; // rbx
  int v10; // ebp
  int v12; // ebp
  _WORD *v13; // rax
  int v14; // ebp
  _BYTE *v15; // rax
  bool v16; // zf
  __int64 v17; // rbp
  _QWORD *v18; // rax
  bool v19; // zf
  GUID *PoolWithTag; // rax
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  v8 = 0;
  v9 = 0LL;
  if ( a4 > 0x1003 )
  {
    if ( a4 != 8210 )
      goto LABEL_8;
    v16 = a1 == 7;
LABEL_59:
    if ( !v16 )
      goto LABEL_8;
    goto LABEL_11;
  }
  if ( a4 == 4099 )
  {
LABEL_11:
    v8 = a2;
    goto LABEL_35;
  }
  if ( a4 > 0x11 )
  {
    if ( a4 != 18 )
    {
      if ( a4 == 19 )
      {
        v19 = a1 == 3;
        goto LABEL_41;
      }
      if ( a4 != 20 )
      {
        if ( a4 <= 0x15 )
          goto LABEL_8;
        if ( a4 <= 0x18 )
        {
LABEL_56:
          v19 = a1 == 4;
          goto LABEL_41;
        }
        if ( a4 != 25 )
          goto LABEL_8;
      }
    }
    if ( a1 - 1 > 1 )
      goto LABEL_8;
    goto LABEL_11;
  }
  if ( a4 != 17 )
  {
    if ( a4 > 9 )
    {
      if ( a4 == 13 )
      {
        if ( !a1 )
          goto LABEL_8;
        if ( a1 <= 2 )
        {
          if ( a2 != 78 )
            goto LABEL_8;
          v8 = 16;
          PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x63647050u);
          v9 = PoolWithTag;
          if ( PoolWithTag )
          {
            GuidString.Buffer = a3;
            *(_DWORD *)&GuidString.Length = 5111884;
            if ( RtlGUIDFromString(&GuidString, PoolWithTag) < 0 )
            {
              ExFreePoolWithTag(v9, 0);
              v9 = 0LL;
            }
            goto LABEL_8;
          }
          return (unsigned int)-1073741670;
        }
        if ( a1 != 3 )
          goto LABEL_8;
        v19 = a2 == 16;
LABEL_41:
        v8 = a2;
        v9 = a3;
        if ( !v19 )
        {
          v8 = 0;
          v9 = 0LL;
        }
        goto LABEL_8;
      }
      if ( a4 != 16 || a1 != 3 && a1 != 11 || a2 != 8 )
        goto LABEL_8;
      v8 = 8;
LABEL_35:
      v9 = a3;
      goto LABEL_8;
    }
    if ( a4 < 8 )
    {
      if ( a4 < 2 )
        goto LABEL_8;
      if ( a4 <= 3 )
      {
        if ( a1 != 4 )
          goto LABEL_8;
        v14 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0xFFu )
          goto LABEL_8;
        v8 = 1;
        v15 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x63647050u);
        v9 = v15;
        if ( v15 )
        {
          *v15 = v14;
          goto LABEL_8;
        }
        return (unsigned int)-1073741670;
      }
      if ( a4 <= 5 )
      {
        if ( a1 != 4 )
          goto LABEL_8;
        v12 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 > 0xFFFFu )
          goto LABEL_8;
        v8 = 2;
        v13 = ExAllocatePoolWithTag(PagedPool, 2uLL, 0x63647050u);
        v9 = v13;
        if ( v13 )
        {
          *v13 = v12;
          goto LABEL_8;
        }
        return (unsigned int)-1073741670;
      }
      goto LABEL_56;
    }
    if ( a1 == 4 )
    {
      v17 = *(unsigned int *)a3;
      v8 = 8;
      v18 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x63647050u);
      v9 = v18;
      if ( v18 )
      {
        *v18 = v17;
        goto LABEL_8;
      }
      return (unsigned int)-1073741670;
    }
    v16 = a1 == 11;
    goto LABEL_59;
  }
  if ( a1 == 4 )
  {
    v10 = *(_DWORD *)a3;
    v8 = 1;
    v9 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x63647050u);
    if ( v9 )
    {
      *v9 = -(v10 != 0);
      goto LABEL_8;
    }
    return (unsigned int)-1073741670;
  }
LABEL_8:
  *a5 = v8;
  *a6 = v9;
  return v6;
}
