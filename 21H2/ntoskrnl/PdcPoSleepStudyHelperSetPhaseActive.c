/*
 * XREFs of PdcPoSleepStudyHelperSetPhaseActive @ 0x1407D5410
 * Callers:
 *     <none>
 * Callees:
 *     SshpSetCollectionActive @ 0x14058007C (SshpSetCollectionActive.c)
 */

char __fastcall PdcPoSleepStudyHelperSetPhaseActive(int a1, char a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  ULONG_PTR *v7; // rcx
  char result; // al

  v2 = a1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            if ( v6 != 3 )
              return result;
            v7 = (ULONG_PTR *)&unk_140C1E3E0;
          }
          else
          {
            v7 = (ULONG_PTR *)&unk_140C1E3C0;
          }
        }
        else
        {
          v7 = (ULONG_PTR *)&unk_140C1E3A0;
        }
      }
      else
      {
        v7 = (ULONG_PTR *)&unk_140C1E380;
      }
    }
    else
    {
      v7 = (ULONG_PTR *)&unk_140C1E360;
    }
  }
  else
  {
    v7 = &qword_140C1E340;
  }
  return SshpSetCollectionActive((ULONG_PTR)v7, a2);
}
