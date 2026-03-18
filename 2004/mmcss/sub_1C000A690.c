/*
 * XREFs of sub_1C000A690 @ 0x1C000A690
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00043B8 @ 0x1C00043B8 (sub_1C00043B8.c)
 *     sub_1C000464C @ 0x1C000464C (sub_1C000464C.c)
 *     sub_1C000A800 @ 0x1C000A800 (sub_1C000A800.c)
 *     sub_1C000ACF0 @ 0x1C000ACF0 (sub_1C000ACF0.c)
 *     sub_1C000AE00 @ 0x1C000AE00 (sub_1C000AE00.c)
 *     sub_1C000AF90 @ 0x1C000AF90 (sub_1C000AF90.c)
 */

__int64 __fastcall sub_1C000A690(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR v4; // rbp
  int v5; // r9d
  __int64 v7; // r14
  NTSTATUS v8; // edi
  struct _IRP *MasterIrp; // rbx
  __int64 v10; // r9
  unsigned int MdlAddress_high; // ebx
  int v12; // eax
  unsigned int *v13; // rbx
  __int64 v14; // rax
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = *(_DWORD *)(a2 + 32);
  v7 = *(_QWORD *)(a2 + 48);
  v8 = -1073741811;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v16 = 0LL;
  P = 0LL;
  v18 = 0LL;
  if ( v5 == 272 )
  {
    if ( *(_DWORD *)&MasterIrp->Type
      || *((_BYTE *)&MasterIrp->Size + 2)
      || *((_BYTE *)&MasterIrp->Size + 3)
      || *(&MasterIrp->Size + 2) != 263
      || LOBYTE(MasterIrp->MdlAddress)
      || BYTE1(MasterIrp->MdlAddress)
      || BYTE2(MasterIrp->MdlAddress)
      || (v10 = BYTE3(MasterIrp->MdlAddress), (unsigned __int8)v10 > 1u) )
    {
      if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
        sub_1C00043B8((__int64)off_1C0007000->AttachedDevice, 0xDu, (__int64)&unk_1C00053E8);
    }
    else
    {
      v8 = sub_1C000ACF0(&MasterIrp->Flags, &MasterIrp->Tail.CompletionKey + 3, a3, v10, &v16);
      if ( v8 >= 0 )
      {
        MdlAddress_high = HIDWORD(MasterIrp->MdlAddress);
        KeEnterCriticalRegion();
        if ( MdlAddress_high )
          v12 = sub_1C000AF90(MdlAddress_high, v16, &P);
        else
          v12 = sub_1C000AE00(v16, &P);
        v8 = v12;
        if ( v12 >= 0 )
        {
          v13 = (unsigned int *)P;
          v8 = sub_1C000A800(CurrentThread, P);
          if ( v8 >= 0 )
          {
            v14 = v18;
            *(_QWORD *)(v18 + 8) = v7;
            *(_QWORD *)(v7 + 24) = v14;
            v4 = v13[36];
          }
        }
        KeLeaveCriticalRegion();
      }
    }
  }
  else if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
  {
    sub_1C000464C((__int64)off_1C0007000->AttachedDevice, 0xCu, a3, v5, 272);
  }
  Irp->IoStatus.Status = v8;
  Irp->IoStatus.Information = v4;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v8;
}
