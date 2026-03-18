/*
 * XREFs of ?cjGetLogicalColorSpace@@YGHPAXH0@Z @ 0x21BD9C
 * Callers:
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 */

int __userpurge cjGetLogicalColorSpace@<eax>(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        const unsigned __int16 *a3@<ebx>,
        unsigned int a4@<edi>,
        char *a5,
        int a6,
        void *a7)
{
  int v7; // esi
  int v9; // eax
  unsigned int v12; // [esp+4h] [ebp-4h]
  _DWORD *v13; // [esp+10h] [ebp+8h]

  v7 = 0;
  v12 = a1;
  if ( a1 >= 0x24C )
  {
    if ( a5 )
    {
      LOBYTE(a1) = 9;
      v9 = HmgShareLockCheck(a2, a1);
      v13 = (_DWORD *)v9;
      if ( v9 )
      {
        *(_DWORD *)a5 = *(_DWORD *)(v9 + 16);
        *((_DWORD *)a5 + 1) = *(_DWORD *)(v9 + 20);
        *((_DWORD *)a5 + 2) = *(_DWORD *)(v9 + 24);
        *((_DWORD *)a5 + 3) = *(_DWORD *)(v9 + 28);
        *((_DWORD *)a5 + 4) = *(_DWORD *)(v9 + 32);
        qmemcpy(a5 + 20, (const void *)(v9 + 36), 0x30u);
        RtlStringCchCopyW(260, a5 + 68, (unsigned __int16 *)(v9 + 84), a4, a3);
        v7 = 592;
        if ( v12 < 0x250 )
          v7 = 588;
        else
          *((_DWORD *)a5 + 147) = v13[151];
        DEC_SHARE_REF_CNT(v13);
      }
    }
  }
  return v7;
}
