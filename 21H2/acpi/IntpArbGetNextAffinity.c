/*
 * XREFs of IntpArbGetNextAffinity @ 0x1C009FB18
 * Callers:
 *     ProcessorpSelectProcessorSetFromPartitions @ 0x1C009C294 (ProcessorpSelectProcessorSetFromPartitions.c)
 * Callees:
 *     IntpGetNthSetBit @ 0x1C0029CE4 (IntpGetNthSetBit.c)
 */

__int64 __fastcall IntpArbGetNextAffinity(__int64 **a1, __int64 *a2)
{
  __int64 v2; // r11
  unsigned __int8 v5; // r9
  __int64 v6; // rdi
  char v7; // al
  __int64 v8; // rdx
  unsigned __int8 v9; // bp
  __int64 i; // rax
  int v11; // ecx
  __int64 v13; // r8
  unsigned int v14; // edx

  v2 = 0LL;
  v5 = 0;
  v6 = **a1;
  v7 = *(_BYTE *)(v6 + 2);
  if ( *((_DWORD *)a1 + 4) )
  {
    if ( v7 )
    {
      do
      {
        v13 = (__int64)a1 + v5;
        v14 = ((unsigned int)*(unsigned __int8 *)(v13 + 20) + 1) % *(unsigned __int8 *)(v6 + 16LL * v5 + 9);
        *(_BYTE *)(v13 + 20) = v14;
        if ( (_BYTE)v14 )
          break;
        ++v5;
      }
      while ( v5 < *(_BYTE *)(v6 + 2) );
    }
  }
  else if ( v7 )
  {
    do
    {
      v8 = v5++;
      *((_BYTE *)a1 + v8 + 20) = *((_BYTE *)*a1 + v8 + 8);
      *((_BYTE *)*a1 + v8 + 8) = ((unsigned int)*((unsigned __int8 *)*a1 + v8 + 8) + 1)
                               % *(unsigned __int8 *)(v6 + 16 * v8 + 9);
    }
    while ( v5 < *(_BYTE *)(v6 + 2) );
  }
  v9 = 0;
  *a2 = 0LL;
  for ( i = 0LL; v9 < *(_BYTE *)(v6 + 2); *a2 = i )
  {
    i = *a2 | IntpGetNthSetBit(*(_QWORD *)(v6 + 16 * (v9 + 1LL)), *((unsigned __int8 *)a1 + v9 + 20));
    ++v9;
  }
  v11 = *((_DWORD *)a1 + 4);
  if ( v11 )
  {
    if ( a1[1] == (__int64 *)i )
    {
      *a2 = v2;
      LODWORD(v2) = -1073741275;
    }
    else
    {
      *((_DWORD *)a1 + 4) = v11 + 1;
    }
  }
  else
  {
    a1[1] = (__int64 *)i;
    *((_DWORD *)a1 + 4) = 1;
  }
  return (unsigned int)v2;
}
