/*
 * XREFs of HvcallpExtendedFastHypercallWithOutput @ 0x140409BC0
 * Callers:
 *     HvcallFastExtended @ 0x140390450 (HvcallFastExtended.c)
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x140409B60 (HvcallpExtendedFastHypercall.c)
 */

__int64 __fastcall HvcallpExtendedFastHypercallWithOutput(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r11

  result = HvcallpExtendedFastHypercall(a1, a2, 16 * a3);
  if ( !(_WORD)result )
  {
    v8 = (unsigned __int16)a5;
    if ( a3 || (*a4 = v6, a4[1] = v7, v8 = (unsigned __int16)a5 - 1LL, (unsigned __int16)a5 != 1LL) )
      __asm { jmp     r9 }
  }
  return result;
}
