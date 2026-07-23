/*
 * XREFs of MiCaptureAllocateMapExtendedParameters @ 0x1406E8E98
 * Callers:
 *     MiMapViewOfSectionExCommon @ 0x1406C0BF8 (MiMapViewOfSectionExCommon.c)
 *     MmAllocateVirtualMemory @ 0x1406E8C40 (MmAllocateVirtualMemory.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4E48 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     memset @ 0x140414300 (memset.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCaptureAllocateMapExtendedParameters(
        __int64 *Address,
        ULONGLONG ullMultiplicand,
        char a3,
        int a4,
        _QWORD *a5)
{
  ULONGLONG v7; // rsi
  NTSTATUS v9; // ecx
  ULONGLONG v11; // r14
  int v12; // esi
  char *v13; // r14
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  unsigned __int64 v17; // rcx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  ULONGLONG pullResult; // [rsp+30h] [rbp-48h] BYREF
  __int64 v26; // [rsp+38h] [rbp-40h]
  __int64 *v27; // [rsp+40h] [rbp-38h]
  char *v28; // [rsp+50h] [rbp-28h]
  unsigned __int64 v29; // [rsp+58h] [rbp-20h]

  v7 = (unsigned int)ullMultiplicand;
  pullResult = 0LL;
  memset(a5, 0, 0x48uLL);
  if ( (_DWORD)v7 )
  {
    if ( Address )
    {
      v11 = v7;
      v9 = RtlULongLongMult(v7, 0x10uLL, &pullResult);
      if ( v9 >= 0 )
      {
        v12 = 0;
        if ( a3 )
          ProbeForWrite(Address, pullResult, 8u);
        v27 = Address;
        v13 = (char *)&Address[2 * v11];
        v28 = v13;
        while ( Address < (__int64 *)v13 )
        {
          v14 = (unsigned __int8)*(_DWORD *)Address;
          if ( (unsigned int)(v14 - 1) > 4 || (unsigned __int64)*Address >= 0x100 )
            return (unsigned int)-1073741811;
          v15 = 1 << v14;
          if ( ((1 << v14) & a4) == 0 )
            return (unsigned int)-1073741811;
          if ( (v15 & v12) != 0 )
            return (unsigned int)-1073741811;
          v12 |= v15;
          v16 = v14 - 1;
          if ( v16 )
          {
            v18 = v16 - 1;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                v20 = v19 - 1;
                if ( v20 )
                {
                  if ( v20 != 1 )
                    return (unsigned int)-1073741811;
                  v21 = Address[1];
                  a5[7] = v21;
                  if ( (v21 & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
                    return (unsigned int)-1073741811;
                }
                else
                {
                  a5[5] = Address[1];
                  *((_BYTE *)a5 + 48) = 1;
                }
              }
              else
              {
                v22 = Address[1];
                a5[3] = v22;
                if ( !v22 )
                  return (unsigned int)-1073741811;
              }
            }
            else
            {
              v26 = 0LL;
              v23 = Address[1];
              v26 = v23;
              if ( (unsigned __int64)v23 > 0xFFFFFFFF )
              {
                v24 = v23;
                if ( v23 < 0 )
                {
                  v23 &= ~0x8000000000000000uLL;
                  v26 = v23;
                  *((_BYTE *)a5 + 49) = 1;
                  v24 = v23;
                }
                if ( v24 > 0xFFFFFFFF )
                  return (unsigned int)-1073741811;
              }
              *((_DWORD *)a5 + 8) = v23;
              if ( (_DWORD)v23 == -1 )
                return (unsigned int)-1073741811;
              *((_DWORD *)a5 + 8) = v23 + 1;
            }
          }
          else
          {
            v17 = Address[1];
            v29 = v17;
            if ( a3 )
            {
              if ( (v17 & 7) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v17 + 24 > 0x7FFFFFFF0000LL || v17 + 24 < v17 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            *a5 = *(_QWORD *)v17;
            a5[1] = *(_QWORD *)(v17 + 8);
            a5[2] = *(_QWORD *)(v17 + 16);
          }
          Address += 2;
          v27 = Address;
        }
        *((_DWORD *)a5 + 13) = v12;
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return Address != 0LL ? 0xC000000D : 0;
  }
  return (unsigned int)v9;
}
