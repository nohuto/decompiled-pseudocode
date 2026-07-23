/*
 * XREFs of MiCaptureSectionCreateExtendedParameters @ 0x14071EB3C
 * Callers:
 *     MmCreateSectionEx @ 0x1406AB9E4 (MmCreateSectionEx.c)
 *     MiCreateSectionCommon @ 0x14071E810 (MiCreateSectionCommon.c)
 * Callees:
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 */

__int64 __fastcall MiCaptureSectionCreateExtendedParameters(
        _QWORD *Address,
        ULONGLONG ullMultiplicand,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v5; // rbx
  NTSTATUS v6; // ecx
  __int64 v8; // r14
  char v9; // r10
  int v10; // edi
  _QWORD *v11; // r14
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  ULONGLONG pullResult; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-20h]
  _QWORD *v18; // [rsp+48h] [rbp-10h]

  v5 = Address;
  pullResult = 0LL;
  *(_OWORD *)a4 = 0LL;
  if ( (_DWORD)ullMultiplicand )
  {
    if ( Address )
    {
      v8 = (unsigned int)ullMultiplicand;
      v6 = RtlULongLongMult((unsigned int)ullMultiplicand, 0x10uLL, &pullResult);
      if ( v6 >= 0 )
      {
        v10 = 0;
        if ( v9 )
          ProbeForWrite(v5, pullResult, 8u);
        v17 = v5;
        v11 = &v5[2 * v8];
        v18 = v11;
        while ( v5 < v11 )
        {
          v12 = (unsigned __int8)*(_DWORD *)v5;
          if ( (unsigned int)(v12 - 1) > 1 || *v5 >= 0x100uLL )
            return (unsigned int)-1073741811;
          v13 = 1 << v12;
          if ( ((1 << v12) & 6) == 0 )
            return (unsigned int)-1073741811;
          if ( (v13 & v10) != 0 )
            return (unsigned int)-1073741811;
          v10 |= v13;
          v14 = v12 - 1;
          if ( v14 )
          {
            if ( v14 != 1 )
              return (unsigned int)-1073741811;
            if ( v5[1] > 0xFFFFFFFFuLL )
              return (unsigned int)-1073741811;
            v15 = *((_DWORD *)v5 + 2);
            *(_DWORD *)(a4 + 8) = v15;
            if ( v15 == -1 )
              return (unsigned int)-1073741811;
            *(_DWORD *)(a4 + 8) = v15 + 1;
          }
          else
          {
            if ( (v5[1] & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
              return (unsigned int)-1073741811;
            *(_BYTE *)a4 = 1;
            *(_DWORD *)(a4 + 4) = *((_DWORD *)v5 + 2);
          }
          v5 += 2;
          v17 = v5;
        }
        *(_DWORD *)(a4 + 12) = v10;
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
  return (unsigned int)v6;
}
