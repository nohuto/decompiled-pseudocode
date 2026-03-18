/*
 * XREFs of MiInitializeWalkBounds @ 0x140205030
 * Callers:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     MiGenerateRandomPte @ 0x140311B64 (MiGenerateRandomPte.c)
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
        a2[2] = qword_140C4E160;
        v4 = qword_140C4E170;
        if ( !qword_140C4E170 )
        {
          v4 = 276840448LL;
          qword_140C4E180 = 0x10000000LL;
          qword_140C4E170 = 276840448LL;
          qword_140C4E178 = 276824064LL;
        }
        v3 = 2;
        a2[3] = qword_140C4E160 - 1 + v4;
        return v3;
      case 1:
        *a2 = qword_140C4DBD8;
        a2[1] = qword_140C4DBD8 + 0x7FFFFFFFFFLL;
        return 1LL;
      case 2:
        *a2 = qword_140C4DFD8;
        result = 1LL;
        a2[1] = qword_140C4DFD8 - 1 + (qword_140C4DFB8 << 21);
        break;
      case 3:
        *a2 = qword_140C4DF90;
        result = 1LL;
        a2[1] = qword_140C4DF90 - 1 + (qword_140C4DF70 << 21);
        break;
      case 4:
        *a2 = qword_140C4DF00;
        result = 1LL;
        a2[1] = qword_140C4DF00 - 1 + (qword_140C4DEE0 << 21);
        break;
      case 6:
        *a2 = qword_140C4DE70;
        result = 1LL;
        a2[1] = qword_140C4DE70 - 1 + (qword_140C4DE50 << 21);
        break;
      default:
        return v3;
    }
  }
  return result;
}
