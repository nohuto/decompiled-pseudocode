/*
 * XREFs of StorPortSetDeviceQueueDepth @ 0x1C0004C90
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C00075A4 (RaidAdapterFindUnit.c)
 *     McTemplateK0zquuuqqqt_EtwWriteTransfer @ 0x1C0036B64 (McTemplateK0zquuuqqqt_EtwWriteTransfer.c)
 */

char __fastcall StorPortSetDeviceQueueDepth(__int64 a1, char a2, char a3, char a4, unsigned int a5)
{
  char v5; // bl
  __int64 v9; // rcx
  __int64 Unit; // rax
  __int64 v11; // rcx
  int v12; // r8d
  unsigned int v14; // eax
  unsigned int v15; // [rsp+70h] [rbp+8h]

  v5 = 0;
  HIBYTE(v15) = 0;
  v9 = **(_QWORD **)(a1 - 16);
  if ( !v9 )
    return 0;
  LOBYTE(v15) = a2;
  BYTE1(v15) = a3;
  BYTE2(v15) = a4;
  Unit = RaidAdapterFindUnit(v9, v15);
  v11 = Unit;
  if ( !Unit || a5 > *(_DWORD *)(Unit + 808) )
    return 0;
  v12 = *(_DWORD *)(Unit + 660);
  if ( v12 == a5 )
    return 1;
  if ( a5 )
  {
    *(_DWORD *)(Unit + 660) = a5;
    v14 = a5;
  }
  else
  {
    v14 = *(_DWORD *)(Unit + 660);
  }
  if ( v14 == a5 )
  {
    v5 = 1;
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
      McTemplateK0zquuuqqqt_EtwWriteTransfer(
        *(_DWORD *)(*(_QWORD *)(v11 + 24) + 56LL),
        a5,
        v12,
        *(_QWORD *)(*(_QWORD *)(v11 + 24) + 48LL),
        *(_DWORD *)(*(_QWORD *)(v11 + 24) + 56LL),
        a2,
        a3,
        a4,
        v12,
        a5,
        *(_DWORD *)(v11 + 808),
        1);
  }
  return v5;
}
