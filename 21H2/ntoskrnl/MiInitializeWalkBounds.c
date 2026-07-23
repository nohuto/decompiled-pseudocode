/*
 * XREFs of MiInitializeWalkBounds @ 0x1402ADA10
 * Callers:
 *     MiGenerateRandomPte @ 0x14029EF88 (MiGenerateRandomPte.c)
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeWalkBounds(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  __int64 v4; // rcx
  __int64 result; // rax

  if ( (*(_WORD *)a1 & 0x800) != 0 )
  {
    *a2 = 0LL;
    a2[1] = 0xFFFFF67FFFFFFFFFuLL;
    a2[2] = 0xFFFFF70000000000uLL;
    result = 2LL;
    a2[3] = -1LL;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = 1;
    switch ( *(_BYTE *)(v2 + 184) & 7 )
    {
      case 0:
        *a2 = 0LL;
        a2[1] = 0x7FFFFFFFFFFFLL;
        a2[2] = qword_140C4E3A0;
        v4 = qword_140C4E3B0;
        if ( !qword_140C4E3B0 )
        {
          v4 = 276840448LL;
          qword_140C4E3C0 = 0x10000000LL;
          qword_140C4E3B0 = 276840448LL;
          qword_140C4E3B8[0] = 276824064LL;
        }
        v3 = 2;
        a2[3] = qword_140C4E3A0 - 1 + v4;
        return v3;
      case 1:
        *a2 = qword_140C4DE18;
        a2[1] = qword_140C4DE18 + 0x7FFFFFFFFFLL;
        return 1LL;
      case 2:
        *a2 = qword_140C4E218;
        result = 1LL;
        a2[1] = qword_140C4E218 - 1 + (qword_140C4E1F8 << 21);
        break;
      case 3:
        *a2 = qword_140C4E1D0;
        result = 1LL;
        a2[1] = qword_140C4E1D0 - 1 + (qword_140C4E1B0 << 21);
        break;
      case 4:
        *a2 = qword_140C4E140;
        result = 1LL;
        a2[1] = qword_140C4E140 - 1 + (qword_140C4E120 << 21);
        break;
      case 6:
        *a2 = qword_140C4E0B0;
        result = 1LL;
        a2[1] = qword_140C4E0B0 - 1 + (qword_140C4E090 << 21);
        break;
      default:
        return v3;
    }
  }
  return result;
}
