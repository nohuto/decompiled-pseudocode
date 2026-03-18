/*
 * XREFs of ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02BD698
 * Callers:
 *     GreCreateDIBitmapReal @ 0x1C0066F4C (GreCreateDIBitmapReal.c)
 *     GreStretchDIBitsInternal @ 0x1C0074590 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0076650 (GreSetDIBitsToDeviceInternal.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00D0890 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall XEPALOBJ::vGetEntriesFrom(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 result; // rax
  unsigned int v7; // esi
  unsigned int v9; // r11d
  unsigned int v10; // r9d
  unsigned __int16 *v11; // rdi
  __int64 v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF
  unsigned int v17; // [rsp+28h] [rbp+28h]

  result = (unsigned __int64)&retaddr;
  v7 = *(_DWORD *)(a2 + 28);
  if ( (*(_DWORD *)(a3 + 24) & 0x800) != 0 )
    v9 = *(_DWORD *)(a3 + 28);
  else
    v9 = 0;
  v10 = a5;
  if ( a5 )
  {
    v11 = (unsigned __int16 *)(a4 + 2LL * a5);
    v12 = 4LL * a5;
    do
    {
      --v11;
      --v10;
      v13 = *v11;
      v12 -= 4LL;
      if ( v13 >= v7 )
        v13 %= v7;
      v14 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL * v13);
      v17 = v14;
      if ( HIBYTE(v14) == 2 )
      {
        if ( v9 )
        {
          v15 = (unsigned __int16)v14;
          if ( (unsigned __int16)v14 >= v9 )
            v15 = (unsigned __int16)v14 % v9;
          v17 = *(_DWORD *)(*(_QWORD *)(a3 + 112) + 4LL * v15);
        }
        else
        {
          v17 = apalVGA[*(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL * v13) & 0xF];
        }
      }
      HIBYTE(v17) = 0;
      result = v17;
      *(_DWORD *)(v12 + *(_QWORD *)(*(_QWORD *)a1 + 112LL)) = v17;
    }
    while ( v10 );
  }
  return result;
}
