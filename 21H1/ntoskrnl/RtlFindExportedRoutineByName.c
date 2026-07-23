/*
 * XREFs of RtlFindExportedRoutineByName @ 0x1406FA690
 * Callers:
 *     MmGetSystemRoutineAddress @ 0x1406FC3A0 (MmGetSystemRoutineAddress.c)
 *     MiUnloadApproved @ 0x14075D2CC (MiUnloadApproved.c)
 *     MiCompactServiceTable @ 0x140775838 (MiCompactServiceTable.c)
 *     MmCallDllInitialize @ 0x1407932E0 (MmCallDllInitialize.c)
 *     KsepResolveShimHooks @ 0x1408BB864 (KsepResolveShimHooks.c)
 *     PspInitializeSystemDlls @ 0x140A672CC (PspInitializeSystemDlls.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14033AA90 (RtlImageDirectoryEntryToData.c)
 */

PVOID __cdecl RtlFindExportedRoutineByName(PVOID BaseOfImage, PCSTR RoutineName)
{
  char *v4; // rax
  char *v5; // r9
  char *v6; // r8
  int v7; // r10d
  char *v8; // rbp
  char *v9; // rsi
  int v10; // ecx
  PCSTR v11; // rax
  int v12; // edx
  signed __int64 v13; // rdi
  CHAR v14; // r11
  int v15; // eax
  ULONG v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0;
  v4 = (char *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0, &v17);
  v5 = v4;
  v6 = 0LL;
  if ( v4 )
  {
    v7 = 0;
    v8 = (char *)BaseOfImage + *((unsigned int *)v4 + 8);
    v9 = (char *)BaseOfImage + *((unsigned int *)v4 + 9);
    v10 = *((_DWORD *)v4 + 6) - 1;
    if ( v10 >= 0 )
    {
      do
      {
        v11 = RoutineName;
        v12 = (v7 + v10) >> 1;
        v13 = (_BYTE *)BaseOfImage + *(unsigned int *)&v8[4 * v12] - RoutineName;
        while ( 1 )
        {
          v14 = *v11;
          if ( *v11 != v11[v13] )
            break;
          ++v11;
          if ( !v14 )
          {
            v15 = 0;
            goto LABEL_7;
          }
        }
        v15 = *v11 < (unsigned int)v11[v13] ? -1 : 1;
LABEL_7:
        if ( v15 < 0 )
        {
          if ( !v12 )
            return v6;
          v10 = v12 - 1;
        }
        else
        {
          if ( v15 <= 0 )
            break;
          v7 = v12 + 1;
        }
      }
      while ( v10 >= v7 );
      if ( v10 >= v7 && (unsigned int)*(unsigned __int16 *)&v9[2 * v12] < *((_DWORD *)v5 + 5) )
      {
        v6 = (char *)BaseOfImage
           + *(unsigned int *)((char *)BaseOfImage + 4 * *(unsigned __int16 *)&v9[2 * v12] + *((unsigned int *)v5 + 7));
        if ( v6 > v5 && v6 < &v5[v17] )
          return 0LL;
      }
    }
  }
  return v6;
}
