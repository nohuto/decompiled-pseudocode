/*
 * XREFs of PortPassThroughMarshalResultsFromSrb @ 0x1C005911C
 * Callers:
 *     PortpCompleteRequestIrp @ 0x1C0059480 (PortpCompleteRequestIrp.c)
 * Callees:
 *     memmove @ 0x1C001D740 (memmove.c)
 *     PortPassThroughApplyNormalizedRequest @ 0x1C0058A10 (PortPassThroughApplyNormalizedRequest.c)
 *     PortPassThroughNormalize @ 0x1C0059264 (PortPassThroughNormalize.c)
 */

char __fastcall PortPassThroughMarshalResultsFromSrb(IRP *a1, __int64 a2, char a3, __int64 a4)
{
  int v8; // eax
  int v9; // ebx
  int v10; // ecx
  unsigned __int64 Length; // r13
  char v12; // al
  char *v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int128 v19; // [rsp+20h] [rbp-40h] BYREF
  __int128 v20; // [rsp+30h] [rbp-30h]
  __int128 v21; // [rsp+40h] [rbp-20h]
  __int64 v22; // [rsp+50h] [rbp-10h]

  *(_QWORD *)(a4 + 8) = 0LL;
  v22 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v8 = PortPassThroughNormalize(&v19, a1);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = *(_DWORD *)a4;
    Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
    BYTE2(v19) = *(_BYTE *)(a2 + 4);
    v12 = *(_BYTE *)(a2 + 3);
    if ( v12 >= 0 )
    {
      LOBYTE(v14) = 0;
      BYTE7(v19) = 0;
    }
    else
    {
      if ( BYTE7(v19) )
        v13 = (char *)a1->AssociatedIrp.MasterIrp + (unsigned int)v21;
      else
        v13 = 0LL;
      v14 = *(unsigned __int8 *)(a2 + 11);
      BYTE7(v19) = *(_BYTE *)(a2 + 11);
      if ( v13 && (_BYTE)v14 )
      {
        memmove(v13, *(const void **)(a2 + 32), v14);
        v12 = *(_BYTE *)(a2 + 3);
      }
      v10 = 0;
    }
    v15 = *(unsigned int *)(a2 + 16);
    v9 = 0;
    HIDWORD(v19) = *(_DWORD *)(a2 + 16);
    if ( (v12 & 0x3F) != 0x12 )
      v9 = v10;
    if ( (_BYTE)v14 )
    {
      v16 = (unsigned int)v21 + (unsigned __int8)v14;
    }
    else
    {
      v16 = (unsigned __int16)v19;
      if ( v9 < 0 && *(_BYTE *)(a2 + 4) )
      {
        v9 = 0;
        v16 = 3LL;
      }
    }
    v17 = v16;
    if ( !a3 && BYTE8(v19) && (_DWORD)v15 && *((_QWORD *)&v20 + 1) )
      v17 = *((_QWORD *)&v20 + 1) + v15;
    if ( v17 >= Length )
      v17 = Length;
    *(_QWORD *)(a4 + 8) = v17;
    LOBYTE(v8) = PortPassThroughApplyNormalizedRequest(&v19, a1);
  }
  *(_DWORD *)a4 = v9;
  return v8;
}
