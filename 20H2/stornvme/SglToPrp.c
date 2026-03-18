/*
 * XREFs of SglToPrp @ 0x1C0015E7C
 * Callers:
 *     SetPrpFromSrb @ 0x1C0001AE8 (SetPrpFromSrb.c)
 *     ScsiToNVMe @ 0x1C0003A60 (ScsiToNVMe.c)
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     memset @ 0x1C00054C0 (memset.c)
 */

__int64 __fastcall SglToPrp(__int64 a1, __int64 a2)
{
  char v3; // si
  unsigned int v4; // ebp
  _QWORD *SrbExtension; // rbx
  __int64 v6; // r8
  _DWORD *ScatterGatherList; // rax
  _DWORD *v8; // rdx
  __int64 v9; // r14
  _QWORD *v10; // r8
  _QWORD *v11; // rdi
  __int64 v12; // r15
  __int64 v13; // r12
  int v14; // r14d
  _QWORD *v15; // rax
  bool v16; // zf
  _QWORD *v17; // rax
  __int64 PhysicalAddress; // rax
  int v22; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0;
  SrbExtension = (_QWORD *)GetSrbExtension(a2);
  if ( (*((_BYTE *)SrbExtension + 4253) & 6) == 2 )
  {
    ScatterGatherList = (_DWORD *)SrbExtension[527];
    v8 = ScatterGatherList;
    if ( !ScatterGatherList )
    {
      ScatterGatherList = (_DWORD *)StorPortGetScatterGatherList(v6, a2);
      SrbExtension[527] = ScatterGatherList;
      v8 = ScatterGatherList;
    }
    v9 = 0LL;
    v10 = SrbExtension + 515;
    v11 = SrbExtension + 515;
    v22 = 0;
    if ( *ScatterGatherList )
    {
      do
      {
        if ( v3 )
        {
          memset(SrbExtension, 0, 0x1000uLL);
          v8 = (_DWORD *)SrbExtension[527];
          v10 = SrbExtension + 515;
          v3 = 0;
        }
        v12 = *(_QWORD *)&v8[6 * v9 + 4];
        v13 = (unsigned int)v8[6 * v9 + 6];
        if ( v13 + v12 % 4096 > 4096 )
        {
          if ( (_DWORD)v13 )
          {
            do
            {
              v14 = v12 & 0xFFF;
              if ( v3 )
              {
                memset(SrbExtension, 0, 0x1000uLL);
                v3 = 0;
              }
              *v11 = v12;
              v10 = SrbExtension + 515;
              if ( (unsigned int)(v14 + v13) <= 0x1000 )
                break;
              LODWORD(v13) = v14 + v13 - 4096;
              v12 += (unsigned int)(4096 - v14);
              v15 = v11 + 1;
              if ( v11 == v10 )
                v3 = 1;
              ++v4;
              v16 = v11 == v10;
              v11 = SrbExtension;
              if ( !v16 )
                v11 = v15;
            }
            while ( (_DWORD)v13 );
            LODWORD(v9) = v22;
          }
        }
        else
        {
          *v11 = v12;
        }
        v8 = (_DWORD *)SrbExtension[527];
        v17 = v11 + 1;
        if ( v11 == v10 )
          v3 = 1;
        v9 = (unsigned int)(v9 + 1);
        ++v4;
        v22 = v9;
        v16 = v11 == v10;
        v11 = SrbExtension;
        if ( !v16 )
          v11 = v17;
      }
      while ( (unsigned int)v9 < *v8 );
      if ( v4 >= 2 )
      {
        if ( v4 == 2 )
        {
          PhysicalAddress = *SrbExtension;
        }
        else
        {
          v22 = 0;
          PhysicalAddress = StorPortGetPhysicalAddress(a1, a2, SrbExtension, &v22);
        }
        SrbExtension[516] = PhysicalAddress;
      }
    }
  }
  return 0LL;
}
