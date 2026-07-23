/*
 * XREFs of KdpPrint @ 0x1409BA6C8
 * Callers:
 *     KdpTrap @ 0x1409BBA20 (KdpTrap.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KdEnterDebugger @ 0x1409B8028 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1409B8190 (KdExitDebugger.c)
 *     KdLogDbgPrint @ 0x1409BA380 (KdLogDbgPrint.c)
 *     KdpQuickMoveMemory @ 0x1409BACF0 (KdpQuickMoveMemory.c)
 *     KdpPrintString @ 0x1409BB7A0 (KdpPrintString.c)
 */

__int64 __fastcall KdpPrint(
        unsigned int a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int16 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        _BYTE *a8)
{
  __int64 v8; // r10
  unsigned int v9; // r8d
  unsigned int v10; // edi
  unsigned __int16 v11; // r10
  unsigned __int64 v12; // rdx
  void *v13; // rsp
  unsigned __int64 v14; // r9
  char v15; // bl
  char v17[480]; // [rsp+0h] [rbp-200h] BYREF
  __int128 v18; // [rsp+200h] [rbp+0h] BYREF

  v18 = 0LL;
  v8 = 101LL;
  if ( a1 < 0x9C )
    v8 = a1;
  v9 = 3;
  if ( a1 < 0x9C )
    v9 = a2;
  v10 = 0;
  *a8 = 0;
  if ( v9 <= 0x1F )
    v9 = 1 << v9;
  if ( (v9 & Kd_WIN2000_Mask) != 0 || (_mm_lfence(), (v9 & *(_DWORD *)*(&KdComponentTable + v8)) != 0) )
  {
    v11 = 512;
    if ( a4 <= 0x200u )
      v11 = a4;
    if ( a5 )
    {
      if ( v11 )
      {
        v12 = a3 + v11;
        if ( v12 > 0x7FFFFFFF0000LL || v12 < a3 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v13 = alloca(512LL);
      KdpQuickMoveMemory(v17, a3, v11);
      a3 = v14;
    }
    *((_QWORD *)&v18 + 1) = a3;
    LOWORD(v18) = v11;
    KdLogDbgPrint((unsigned __int16 *)&v18);
    if ( !(_BYTE)KdDebuggerNotPresent || KdEventLoggingPresent )
    {
      v15 = KdEnterDebugger(a6);
      v10 = (unsigned __int8)KdpPrintString(&v18) != 0 ? 0x80000003 : 0;
      KdExitDebugger(v15);
    }
    else
    {
      v10 = -1073741667;
    }
  }
  *a8 = 1;
  return v10;
}
