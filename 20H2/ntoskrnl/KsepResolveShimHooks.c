/*
 * XREFs of KsepResolveShimHooks @ 0x1408C28E4
 * Callers:
 *     KsepResolveApplicableShimsForDriver @ 0x1408C2E74 (KsepResolveApplicableShimsForDriver.c)
 * Callees:
 *     RtlFindExportedRoutineByName @ 0x1406ADBB0 (RtlFindExportedRoutineByName.c)
 *     KsepGetModuleInfoByName @ 0x1408C3568 (KsepGetModuleInfoByName.c)
 */

__int64 __fastcall KsepResolveShimHooks(__int64 a1, int *a2)
{
  __int64 v4; // r12
  int *v5; // rsi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  void *v9; // rbx
  __int64 result; // rax
  __int64 v11; // rdi
  int v12; // r15d
  PVOID ExportedRoutineByName; // rax
  PVOID BaseOfImage; // [rsp+50h] [rbp+8h]

  BaseOfImage = 0LL;
  if ( a1 && a2 )
  {
    LODWORD(v4) = 0;
    v5 = a2;
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == 4 )
        return 0LL;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( !v8 )
          {
            result = KsepGetModuleInfoByName(*((PCWSTR *)v5 + 1));
            if ( (int)result < 0 )
              return result;
            v9 = BaseOfImage;
            goto LABEL_15;
          }
          if ( v8 != 1 )
            return 3221225485LL;
          v9 = 0LL;
        }
        else
        {
          v9 = *(void **)(a1 + 320);
        }
      }
      else
      {
        v9 = *(void **)(a1 + 24);
      }
      BaseOfImage = v9;
LABEL_15:
      v11 = *((_QWORD *)v5 + 2);
      v12 = 0;
      if ( v11 )
      {
        while ( *(_DWORD *)v11 != 2 )
        {
          if ( !*(_DWORD *)v11 )
          {
            ExportedRoutineByName = RtlFindExportedRoutineByName(v9, *(PCSTR *)(v11 + 8));
            if ( !ExportedRoutineByName )
              return 3221225473LL;
            *(_QWORD *)(v11 + 24) = ExportedRoutineByName;
          }
          v11 = *((_QWORD *)v5 + 2) + 32LL * (unsigned int)++v12;
          if ( !v11 )
            break;
        }
      }
      v4 = (unsigned int)(v4 + 1);
      v5 = &a2[6 * v4];
      if ( !v5 )
        return 0LL;
    }
  }
  return 3221225485LL;
}
