/*
 * XREFs of _RtlCaptureStackContext@12 @ 0x4B308B20
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpStkIsPointerInDllRange@4 @ 0x4B307021 (_RtlpStkIsPointerInDllRange@4.c)
 */

int __stdcall RtlCaptureStackContext(unsigned int *a1, int *a2, int a3)
{
  int v3; // edx
  void **v5; // esi
  unsigned int *StackBase; // eax
  unsigned int *v7; // esi
  int v8; // ebx
  unsigned int *v9; // eax
  unsigned int v10; // eax
  unsigned int *v11; // ecx
  int v12; // [esp+0h] [ebp-14h]
  unsigned int *v13; // [esp+0h] [ebp-14h]
  unsigned int v14; // [esp+4h] [ebp-10h]
  int v15; // [esp+Ch] [ebp-8h]
  unsigned int *v16; // [esp+10h] [ebp-4h]
  int savedregs; // [esp+14h] [ebp+0h] BYREF
  void *retaddr; // [esp+18h] [ebp+4h]

  v3 = a3;
  if ( !a3 )
    return 0;
  if ( a2 )
  {
    a2[2] = (int)retaddr;
    v15 = 8 * a3 + 4;
  }
  else
  {
    *a1 = (unsigned int)retaddr;
    v15 = v12;
  }
  v5 = (void **)&savedregs;
  StackBase = (unsigned int *)NtCurrentTeb()->NtTib.StackBase;
  v13 = StackBase;
  while ( v5 < (void **)StackBase && *v5 != retaddr )
    ++v5;
  if ( a2 )
    a2[1] = (int)v5;
  v7 = (unsigned int *)(v5 + 1);
  v8 = 1;
  if ( v7 < StackBase )
  {
    v16 = (unsigned int *)(a2 + 4);
    do
    {
      if ( v8 == v3 )
        break;
      if ( a2 )
      {
        if ( v7 < (unsigned int *)a2 )
          goto LABEL_21;
        v9 = (unsigned int *)((char *)a2 + v15);
      }
      else
      {
        if ( v7 < a1 )
          goto LABEL_21;
        v9 = &a1[v3];
      }
      if ( v7 >= v9 )
      {
LABEL_21:
        v10 = *v7;
        v14 = *v7;
        if ( *v7 > 0x10000 && (v10 < (unsigned int)&savedregs || v10 > (unsigned int)v13) )
        {
          if ( RtlpStkIsPointerInDllRange(v10) )
          {
            if ( a2 )
            {
              v11 = v16;
              *(v16 - 1) = (unsigned int)v7;
              *v16 = v14;
            }
            else
            {
              a1[v8] = v14;
              v11 = v16;
            }
            ++v8;
            v16 = v11 + 2;
          }
          v3 = a3;
        }
      }
      ++v7;
    }
    while ( v7 < v13 );
  }
  if ( a2 )
    *a2 = v8;
  return v8;
}
