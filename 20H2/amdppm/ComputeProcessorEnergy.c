/*
 * XREFs of ComputeProcessorEnergy @ 0x1C00012B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ComputeProcessorEnergy(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned int *v6; // r10
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  __int64 i; // rax
  unsigned int v11; // edx
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned __int64 result; // rax
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // r9d
  unsigned int v18; // eax

  v6 = (unsigned int *)((char *)&unk_1C00139E8 + 256 * (unsigned __int64)a1);
  v8 = v6[1];
  if ( (v8 & 1) != 0 )
  {
    v9 = (unsigned __int8)v8 >> 1;
    for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
    {
      v11 = v6[i + 2];
      if ( a4 == (unsigned __int8)v11 )
      {
        v12 = v11 >> 8;
        goto LABEL_8;
      }
      if ( a4 < (unsigned __int8)v11 )
        break;
    }
    if ( (_DWORD)i )
    {
      v15 = v6[(unsigned int)(i - 1) + 2];
      if ( (_DWORD)i == v9 )
        LODWORD(i) = i - 1;
    }
    else
    {
      v15 = v6[i + 2];
      LODWORD(i) = 1;
    }
    v16 = v15 >> 8;
    v17 = v6[(unsigned int)(i - 1) + 2];
    v18 = v6[(unsigned int)i + 2];
    if ( (unsigned __int8)v17 >= (unsigned int)(unsigned __int8)v18 )
      v12 = 0;
    else
      v12 = v16
          + (int)((a4 - (unsigned __int8)v17) * ((v18 >> 8) - (v17 >> 8)))
          / ((unsigned __int8)v18 - (unsigned __int8)v17);
LABEL_8:
    v13 = 100LL;
  }
  else
  {
    v12 = *v6;
    v13 = a4;
  }
  result = 10 * a2 * v13 * (unsigned __int64)v12 / qword_1C0013BF0;
  *a5 = result;
  return result;
}
