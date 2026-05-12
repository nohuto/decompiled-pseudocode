/*
 * XREFs of RaidBusEnumeratorProcessModifiedNodes @ 0x1C00144F4
 * Callers:
 *     RaidAdapterRescanBus @ 0x1C001410C (RaidAdapterRescanBus.c)
 * Callees:
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C001715C (RaidBusEnumeratorProcessNewUnit.c)
 *     McTemplateK0zqjqq_EtwWriteTransfer @ 0x1C0017374 (McTemplateK0zqjqq_EtwWriteTransfer.c)
 *     WPP_SF_qqddds @ 0x1C00325FC (WPP_SF_qqddds.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessModifiedNodes(__int64 *a1, int a2, int a3)
{
  __int64 v3; // rsi
  __int64 *v4; // r12
  __int64 *v5; // r14
  int v6; // ebp
  int v7; // r15d
  unsigned int v9; // ebx
  int v11; // ecx
  __int64 v12; // rcx
  unsigned __int8 v13; // al
  int v14; // eax
  const char *v15; // rcx

  v3 = *a1;
  v4 = a1 + 15;
  v5 = (__int64 *)a1[15];
  v6 = 0;
  v7 = 0;
  v9 = 0;
  while ( v5 != v4 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      v14 = *((_DWORD *)v5 + 18);
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          v15 = "new";
        }
        else
        {
          v15 = "matched";
          if ( v14 != 2 )
            v15 = "invalid";
        }
      }
      else
      {
        v15 = "unmatched";
      }
      WPP_SF_qqddds(
        WPP_GLOBAL_Control->AttachedDevice,
        *((unsigned __int8 *)v5 - 14),
        *((unsigned __int8 *)v5 - 15),
        v3,
        *(v5 - 1),
        *((_BYTE *)v5 - 15),
        *((_BYTE *)v5 - 14),
        *((_BYTE *)v5 - 13),
        (__int64)v15);
    }
    v11 = *((_DWORD *)v5 + 18);
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        RaidBusEnumeratorProcessNewUnit(a1, v5 - 2);
        ++v6;
        v9 = 1;
      }
    }
    else
    {
      v12 = *(v5 - 1);
      v13 = *(_BYTE *)(v12 + 448);
      if ( (v13 & 4) != 0 )
      {
        v13 &= ~4u;
        *(_BYTE *)(v12 + 448) = v13;
      }
      v9 = (v13 >> 1) & 1;
      ++v7;
    }
    v5 = (__int64 *)*v5;
  }
  if ( *(_BYTE *)(v3 + 4514) && (v6 || v7) && (byte_1C0068845 & 0x20) != 0 )
    McTemplateK0zqjqq_EtwWriteTransfer(
      *(_DWORD *)(v3 + 56),
      a2,
      a3,
      *(_QWORD *)(v3 + 4864),
      *(_DWORD *)(v3 + 56),
      v3 + 5192,
      v6,
      v7);
  return v9;
}
