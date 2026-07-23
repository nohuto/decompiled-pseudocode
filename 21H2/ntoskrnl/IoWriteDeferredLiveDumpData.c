/*
 * XREFs of IoWriteDeferredLiveDumpData @ 0x140896B80
 * Callers:
 *     DbgkpWerDeferredWriteRoutine @ 0x1408893E0 (DbgkpWerDeferredWriteRoutine.c)
 * Callees:
 *     EtwActivityIdControl @ 0x140272110 (EtwActivityIdControl.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     IopLiveDumpTrace @ 0x140508CC4 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x140509810 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x140509A28 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140509AD0 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpReleaseResources @ 0x14089884C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x140898CE0 (IopLiveDumpWriteDumpFile.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoWriteDeferredLiveDumpData(__int64 P)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  unsigned __int64 *v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+7Ch] [rbp-1Ch]

  v2 = MEMORY[0xFFFFF78000000008];
  IopLiveDumpTraceInterfaceStart();
  IopLiveDumpTrace();
  v3 = IopLiveDumpWriteDumpFile(P);
  IopLiveDumpTraceDumpFileWriteEnd(P, 1LL, v3);
  if ( v3 >= 0 && (*(_BYTE *)(P + 80) & 2) != 0 )
    v3 = 261;
  IopLiveDumpTraceInterfaceEnd(v4, 1LL, v3);
  if ( (unsigned int)dword_140C044D8 > 5 && tlgKeywordOn((__int64)&dword_140C044D8, 0x200000000000LL) )
  {
    v5 = *(_QWORD *)(P + 560);
    v13 = 0;
    v12 = 8;
    v6 = *(_QWORD *)(v5 + 4000);
    v11 = &v8;
    v8 = v6;
    v16 = 0;
    v15 = 8;
    v14 = &v9;
    v9 = (MEMORY[0xFFFFF78000000008] - v2) / 0x2710uLL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C044D8,
      (unsigned __int8 *)&dword_140024D84,
      (const GUID *)(P + 864),
      (const GUID *)(P + 848),
      4u,
      &v10);
  }
  EtwActivityIdControl(2u, (LPGUID)(P + 848));
  IopLiveDumpReleaseResources(P);
  ExFreePoolWithTag((PVOID)P, 0x706D644Cu);
  return (unsigned int)v3;
}
