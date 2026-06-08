/*
 * XREFs of DecodeAcpiPStates @ 0x1C0037210
 * Callers:
 *     RegisterHvPerfStates @ 0x1C0030AF0 (RegisterHvPerfStates.c)
 * Callees:
 *     DecodeControlStatusRegisterIo @ 0x1C00374DC (DecodeControlStatusRegisterIo.c)
 */

__int64 __fastcall DecodeAcpiPStates(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4,
        _QWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  int v7; // r10d
  int v8; // esi
  int v10; // edx
  char v12; // cl
  __int64 v13; // rax

  *a2 = 0LL;
  v7 = a1 + 408;
  *a3 = 0LL;
  v8 = (int)a3;
  *a2 &= 0xFFFFFFFFFFFFFuLL;
  v10 = (int)a6;
  *a3 &= 0xFFFFFFFFFFFFFuLL;
  *a4 = 0LL;
  *a6 = 0;
  *a5 = 0LL;
  *a7 = 0;
  v12 = *(_BYTE *)(a1 + 408);
  if ( v12 == 127 && (v13 = *(_QWORD *)(a1 + 272), (v13 & 0x60000000) != 0) )
  {
    if ( (v13 & 0x40000000) != 0 && *(_DWORD *)(a1 + 412) )
    {
      *a2 = *a2 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL;
      *(_DWORD *)a2 = *(_DWORD *)(a1 + 412);
      if ( *(_BYTE *)(a1 + 420) == 127 && *(_DWORD *)(a1 + 424) )
      {
        *a3 = *a3 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL;
        *(_DWORD *)a3 = *(_DWORD *)(a1 + 424);
      }
    }
    else if ( (v13 & 0x20000000) != 0 && dword_1C001C600 )
    {
      *a2 = *a2 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL;
      *(_DWORD *)a2 = dword_1C001C600;
      *a4 = qword_1C001C608;
    }
  }
  else if ( v12 == 1 && (*(_DWORD *)(a1 + 272) & 0x10000000) != 0 )
  {
    if ( *(_DWORD *)(a1 + 412) )
    {
      LOBYTE(v10) = 1;
      DecodeControlStatusRegisterIo(v7, v10, (_DWORD)a2, (_DWORD)a4, (__int64)a6);
      if ( *(_BYTE *)(a1 + 420) == 1 )
      {
        if ( *(_DWORD *)(a1 + 424) )
          DecodeControlStatusRegisterIo(a1 + 420, 0, v8, (_DWORD)a5, (__int64)a7);
      }
    }
  }
  return *a2 == 0 ? 0xC000000D : 0;
}
