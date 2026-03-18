/*
 * XREFs of MiFreeRelocations @ 0x140756458
 * Callers:
 *     MiDeleteControlArea @ 0x1402B9578 (MiDeleteControlArea.c)
 *     MiRelocateImage @ 0x1406442B0 (MiRelocateImage.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x14037DA1C (MiGetLeafPfnBuddy.c)
 *     MiDeleteDirectMapFixupPfn @ 0x14054E804 (MiDeleteDirectMapFixupPfn.c)
 *     MiReturnImageBase @ 0x140634278 (MiReturnImageBase.c)
 *     MiFreeImageLoadConfig @ 0x1407564E8 (MiFreeImageLoadConfig.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRelocations(_DWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v5; // rcx
  _QWORD *LeafPfnBuddy; // rbx
  _QWORD *v7; // rbx
  unsigned int v8; // ecx
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    v14 = 0LL;
    v2 = (unsigned int)a1[22];
    v13 = 0LL;
    if ( v2 != 0xFFFFFFFFLL )
    {
      v8 = a1[23];
      *(_QWORD *)&v13 = v2;
      DWORD2(v13) = (unsigned __int16)v8;
      v9 = (a1[14] & 0x10000000) == 0;
      LODWORD(v14) = (v8 >> 20) & 3;
      if ( v9 )
      {
        BYTE12(v13) = 0;
      }
      else
      {
        BYTE12(v13) = 1;
        BYTE13(v13) = BYTE2(v8) & 1;
      }
      MiReturnImageBase((__int64)&v13);
      a1[22] = -1;
    }
    MiFreeImageLoadConfig(a2 + 9);
    v5 = (_QWORD *)a2[2];
    if ( v5 )
    {
      do
      {
        v7 = (_QWORD *)*v5;
        ExFreePoolWithTag(v5, 0);
        v5 = v7;
      }
      while ( v7 );
    }
    LeafPfnBuddy = (_QWORD *)a2[13];
    while ( LeafPfnBuddy )
    {
      LeafPfnBuddy = (_QWORD *)MiGetLeafPfnBuddy(LeafPfnBuddy);
      MiDeleteDirectMapFixupPfn(v10, v10, v11, v12);
    }
    ExFreePoolWithTag(a2, 0);
  }
}
