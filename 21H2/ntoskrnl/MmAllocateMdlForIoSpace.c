/*
 * XREFs of MmAllocateMdlForIoSpace @ 0x140532110
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 */

__int64 __fastcall MmAllocateMdlForIoSpace(_QWORD *a1, unsigned __int64 a2, PMDL *a3)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // r9
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  PMDL Mdl; // rax
  PMDL v12; // rcx
  __int64 result; // rax
  unsigned int v14; // r8d
  struct _MDL *i; // r11
  unsigned int v16; // r10d
  unsigned __int64 v17; // r9
  struct _MDL *v18; // rdx

  v4 = 0;
  v5 = 0LL;
  v7 = a1;
  v8 = a1;
  if ( a2 )
  {
    while ( (v8[1] & 0xFFF) == 0 )
    {
      if ( (*(_DWORD *)v8 & 0xFFF) != 0 )
        break;
      v9 = *v8 >> 12;
      if ( v9 <= 0xFFFFFFFFFLL && ((*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
        break;
      v10 = v5 + v8[1];
      if ( v10 < v5 )
        break;
      v5 += v8[1];
      if ( v10 > 0xFFFFFFFF )
        break;
      ++v4;
      v8 += 2;
      if ( v4 >= a2 )
        goto LABEL_9;
    }
    return 3221225711LL;
  }
  else
  {
LABEL_9:
    Mdl = IoAllocateMdl(0LL, v5, 0, 0, 0LL);
    v12 = Mdl;
    if ( Mdl )
    {
      v14 = 0;
      for ( i = Mdl + 1; v14 < a2; v7 += 2 )
      {
        v16 = 0;
        v17 = v7[1] >> 12;
        v18 = (struct _MDL *)(*v7 >> 12);
        if ( v17 )
        {
          do
          {
            ++v16;
            i->Next = v18;
            i = (struct _MDL *)((char *)i + 8);
            v18 = (struct _MDL *)((char *)v18 + 1);
          }
          while ( v16 < v17 );
        }
        ++v14;
      }
      Mdl->Process = 0LL;
      Mdl->MdlFlags |= 0x802u;
      result = 0LL;
      *a3 = v12;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
