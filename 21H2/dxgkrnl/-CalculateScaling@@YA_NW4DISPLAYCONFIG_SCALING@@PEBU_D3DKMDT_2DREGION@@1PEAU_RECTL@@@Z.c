/*
 * XREFs of ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x1C0019E5C
 * Callers:
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01D751C (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

char __fastcall CalculateScaling(int a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // r11d
  unsigned int v8; // r9d
  unsigned int v9; // r10d
  unsigned int v10; // r8d
  unsigned int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // edx
  __int64 v16; // rdi
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // r9d
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // eax
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // edx
  int v30; // ecx
  int v31; // r8d

  v4 = 0;
  switch ( a1 )
  {
    case 1:
      if ( *a2 != *a3 || a2[1] != a3[1] )
      {
        WdLogSingleEntry1(1LL, 85LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v30,
              v29,
              v31,
              0,
              2,
              -1,
              (__int64)L"*pSurfaceSize == *pContentSize",
              85LL,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
      goto LABEL_23;
    case 2:
      v20 = *a2;
      v21 = *a3;
      if ( v20 < *a3 || (v22 = a2[1], v23 = a3[1], v22 < v23) )
      {
LABEL_5:
        v7 = a3[1];
        v8 = a2[1];
        v9 = *a2;
        v10 = *a3;
        v11 = *a2 * v7;
        v12 = v10 * v8;
        if ( v10 * v8 < v11 )
        {
          v27 = v12 / v7;
          v14 = 0;
          v28 = (v9 - v12 / v7) >> 1;
          v9 = v27 + v28;
          v4 = v28;
        }
        else
        {
          v13 = v11 / v10;
          v14 = (v8 - v13) >> 1;
          v8 = v13 + v14;
        }
        *a4 = v4;
        a4[1] = v14;
        a4[2] = v9;
        goto LABEL_8;
      }
      v24 = (v20 - v21) >> 1;
      v25 = (v22 - v23) >> 1;
      *a4 = v24;
      v26 = v21 + v24;
      v8 = v25 + v23;
      a4[1] = v25;
LABEL_24:
      a4[2] = v26;
LABEL_8:
      a4[3] = v8;
      return 1;
    case 3:
LABEL_23:
      v26 = *a2;
      v8 = a2[1];
      *(_QWORD *)a4 = 0LL;
      goto LABEL_24;
    case 4:
      goto LABEL_5;
  }
  if ( a1 != 5 )
  {
    v16 = a1;
    WdLogSingleEntry1(1LL, a1);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v18,
          v17,
          v19,
          0,
          2,
          -1,
          (__int64)L"Unknown scaling type 0x%lx",
          v16,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return 0;
}
