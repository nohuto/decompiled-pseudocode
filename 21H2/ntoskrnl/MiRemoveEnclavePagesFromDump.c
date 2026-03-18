/*
 * XREFs of MiRemoveEnclavePagesFromDump @ 0x1405A9DA4
 * Callers:
 *     MmGetDumpRange @ 0x140593388 (MmGetDumpRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

PMDL __fastcall MiRemoveEnclavePagesFromDump(__int64 a1)
{
  PMDL result; // rax
  _QWORD *p_Next; // rbx
  _QWORD *v4; // rcx
  struct _MDL *Next; // rcx

  result = MemoryDescriptorList;
  p_Next = 0LL;
  while ( result )
  {
    p_Next = &result->Next;
    result = result->Next;
  }
  while ( p_Next )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(a1 + 8))(a1, p_Next[3], p_Next[4], 2LL);
    result = (PMDL)p_Next[1];
    v4 = p_Next;
    if ( result )
    {
      Next = result->Next;
      p_Next = (_QWORD *)p_Next[1];
      if ( result->Next )
      {
        do
        {
          result = Next->Next;
          p_Next = &Next->Next;
          Next = result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        p_Next = (_QWORD *)(p_Next[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !p_Next || (_QWORD *)*p_Next == v4 )
          break;
        v4 = p_Next;
      }
    }
  }
  return result;
}
