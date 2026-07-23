/*
 * XREFs of MiInsertSecureImageActivePatch @ 0x1408CAC54
 * Callers:
 *     MiLoadHotPatch @ 0x1408CAD30 (MiLoadHotPatch.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     MiCompareHotPatchNodes @ 0x1408C9990 (MiCompareHotPatchNodes.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiInsertSecureImageActivePatch(_QWORD *a1)
{
  unsigned __int64 *v1; // rdi
  bool v3; // si
  unsigned __int64 *v4; // rbx
  int v5; // eax
  unsigned __int64 v6; // rax

  v1 = 0LL;
  v3 = 0;
LABEL_2:
  v4 = (unsigned __int64 *)MiSecureImageActivePatches;
  if ( MiSecureImageActivePatches )
  {
    while ( 1 )
    {
      v5 = MiCompareHotPatchNodes((__int64)a1, (__int64)v4);
      if ( v5 <= 0 )
      {
        if ( v5 >= 0 )
        {
          v1 = v4;
          RtlAvlRemoveNode((unsigned __int64 *)&MiSecureImageActivePatches, v4);
          goto LABEL_2;
        }
        v6 = *v4;
        if ( !*v4 )
          break;
      }
      else
      {
        v6 = v4[1];
        if ( !v6 )
        {
          v3 = 1;
          break;
        }
      }
      v4 = (unsigned __int64 *)v6;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)&MiSecureImageActivePatches, (unsigned __int64)v4, v3, a1);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
