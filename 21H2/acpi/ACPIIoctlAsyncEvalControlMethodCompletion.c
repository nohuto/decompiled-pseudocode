/*
 * XREFs of ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C0058090
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C001BE20 (ACPIIoctlEvalPostProcessingV1.c)
 *     ACPIIoctlEvalPostProcessingV2 @ 0x1C0031196 (ACPIIoctlEvalPostProcessingV2.c)
 */

void __fastcall ACPIIoctlAsyncEvalControlMethodCompletion(__int64 a1, int a2, void *a3, IRP *a4)
{
  int v6; // esi
  char v7; // r8
  int v8; // eax
  char v9; // r8

  v6 = a2;
  if ( a2 >= 0 )
  {
    if ( a4->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 3325952 )
    {
      v9 = 0;
    }
    else
    {
      if ( a4->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 3325980 )
      {
        if ( a4->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 3326016 )
        {
          v7 = 0;
        }
        else
        {
          if ( a4->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 3326024 )
          {
LABEL_13:
            dword_1C0081AC8 = 0;
            byte_1C0081ACC = 0;
            FreeDataBuffs((__int64)a3, 1u);
            goto LABEL_14;
          }
          v7 = 1;
        }
        v8 = ACPIIoctlEvalPostProcessingV2(a4, (__int64)a3, v7);
LABEL_12:
        v6 = v8;
        goto LABEL_13;
      }
      v9 = 1;
    }
    v8 = ACPIIoctlEvalPostProcessingV1(a4, (__int64)a3, v9);
    goto LABEL_12;
  }
LABEL_14:
  ExFreePoolWithTag(a3, 0);
  a4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  a4->IoStatus.Status = v6;
  IofCompleteRequest(a4, 0);
}
