/*
 * XREFs of PerfControlCpcSingleRegister @ 0x1C0004380
 * Callers:
 *     <none>
 * Callees:
 *     ReadIoMemRaw @ 0x1C0002E70 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C000324C (WriteIoMemRaw.c)
 *     PerformanceFromPercentage @ 0x1C00048B0 (PerformanceFromPercentage.c)
 */

char __fastcall PerfControlCpcSingleRegister(__int64 a1, __int64 a2, char a3, char a4)
{
  _UNKNOWN **v4; // rax
  unsigned int v7; // r15d
  unsigned int v8; // ebp
  _BYTE *v9; // rbx
  __int64 IoMemRaw; // r11
  unsigned __int8 v11; // cl
  __int64 v12; // rax
  char v13; // r9
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // rax
  char v17; // r9
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // rax
  char v21; // r9
  __int64 v22; // r10
  __int64 v23; // r11
  unsigned __int8 v24; // cl
  unsigned int v25; // r8d
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v4 = &retaddr;
  if ( a3 || a4 )
  {
    v7 = *(_DWORD *)(a2 + 20);
    v8 = *(_DWORD *)(a2 + 16);
    v9 = *(_BYTE **)(a1 + 112);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)a2;
    IoMemRaw = ReadIoMemRaw(a1 + 120);
    if ( *(_BYTE *)(a1 + 93) )
    {
      v11 = v9[129];
      if ( *(_BYTE *)(a2 + 36) )
      {
        if ( v11 < 0x40u || v9[130] )
          IoMemRaw &= ~(((1LL << v11) - 1) << v9[130]);
        else
          IoMemRaw = 0LL;
      }
      else if ( v11 < 0x40u || v9[130] )
      {
        IoMemRaw = IoMemRaw & ~(((1LL << v11) - 1) << v9[130]) | (((1LL << v11) - 1) << v9[130]) & (*(_QWORD *)a2 << v9[130]);
      }
      else
      {
        IoMemRaw = *(_QWORD *)a2;
      }
    }
    if ( *(_BYTE *)(a1 + 94) )
    {
      if ( v9[153] < 0x40u || v9[154] )
      {
        v12 = PerformanceFromPercentage(a1, v8);
        IoMemRaw = v15 & ~v14 | v14 & (v12 << v13);
      }
      else
      {
        IoMemRaw = PerformanceFromPercentage(a1, v8);
      }
    }
    if ( *(_BYTE *)(a1 + 95) )
    {
      if ( v9[177] < 0x40u || v9[178] )
      {
        v16 = PerformanceFromPercentage(a1, v7);
        IoMemRaw = v19 & ~v18 | v18 & (v16 << v17);
      }
      else
      {
        IoMemRaw = PerformanceFromPercentage(a1, v7);
      }
    }
    if ( *(_BYTE *)(a1 + 98) )
    {
      if ( v9[201] < 0x40u || v9[202] )
      {
        v20 = PerformanceFromPercentage(a1, *(unsigned int *)(a2 + 24));
        IoMemRaw = v23 & ~v22 | v22 & (v20 << v21);
      }
      else
      {
        IoMemRaw = PerformanceFromPercentage(a1, *(unsigned int *)(a2 + 24));
      }
    }
    if ( *(_BYTE *)(a1 + 96) )
    {
      v24 = v9[417];
      v25 = 255 * *(_DWORD *)(a2 + 28) / 0x64u;
      if ( v24 < 0x40u || v9[418] )
        IoMemRaw = IoMemRaw & ~(((1LL << v24) - 1) << v9[418]) | (((1LL << v24) - 1) << v9[418]) & ((unsigned __int64)v25 << v9[418]);
      else
        IoMemRaw = v25;
    }
    LOBYTE(v4) = WriteIoMemRaw(a1 + 120, IoMemRaw);
  }
  return (char)v4;
}
