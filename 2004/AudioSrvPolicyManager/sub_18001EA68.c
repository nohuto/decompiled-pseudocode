/*
 * XREFs of sub_18001EA68 @ 0x18001EA68
 * Callers:
 *     sub_18001EC8C @ 0x18001EC8C (sub_18001EC8C.c)
 *     sub_18001EE38 @ 0x18001EE38 (sub_18001EE38.c)
 * Callees:
 *     sub_180010A4C @ 0x180010A4C (sub_180010A4C.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180011444 @ 0x180011444 (sub_180011444.c)
 *     sub_180011ED4 @ 0x180011ED4 (sub_180011ED4.c)
 *     sub_180012044 @ 0x180012044 (sub_180012044.c)
 *     sub_180012658 @ 0x180012658 (sub_180012658.c)
 *     sub_1800126D0 @ 0x1800126D0 (sub_1800126D0.c)
 *     sub_180012748 @ 0x180012748 (sub_180012748.c)
 *     sub_1800127C0 @ 0x1800127C0 (sub_1800127C0.c)
 *     sub_180012868 @ 0x180012868 (sub_180012868.c)
 *     sub_1800213B0 @ 0x1800213B0 (sub_1800213B0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001EA68(__int64 a1, _DWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rsi

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( a2[144] )
  {
    v4 = a2[145];
    goto LABEL_18;
  }
  if ( a2[52] )
    goto LABEL_4;
  v5 = (int)sub_180010A4C((__int64)a2);
  if ( (unsigned int)sub_180012044((__int64)a2) )
    goto LABEL_6;
  if ( (unsigned int)sub_1800127C0((__int64)a2)
    || (unsigned int)sub_180012658((__int64)a2)
    && !(unsigned int)sub_180012748((__int64)a2)
    && (unsigned int)sub_180012868((__int64)a2, 1)
    && ((unsigned int)sub_1800113D0((__int64)a2) || (unsigned int)sub_1800213B0(a2))
    || (unsigned int)sub_1800126D0((__int64)a2)
    && ((unsigned int)sub_180011444((__int64)a2) || (unsigned int)sub_1800213B0(a2)) )
  {
LABEL_4:
    v4 = 2;
    goto LABEL_18;
  }
  if ( !dword_180043378[v5] )
LABEL_6:
    v4 = 0;
  else
    v4 = 2 - ((unsigned int)sub_180011ED4((__int64)a2) != 0);
LABEL_18:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v4;
}
