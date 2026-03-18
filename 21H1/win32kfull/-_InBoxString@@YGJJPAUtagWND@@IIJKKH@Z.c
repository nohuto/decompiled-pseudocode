/*
 * XREFs of ?_InBoxString@@YGJJPAUtagWND@@IIJKKH@Z @ 0x15F954
 * Callers:
 *     _NtUserfnINCBOXSTRING@28 @ 0x16B9ED (_NtUserfnINCBOXSTRING@28.c)
 *     _NtUserfnINLBOXSTRING@28 @ 0x16BBEA (_NtUserfnINLBOXSTRING@28.c)
 * Callees:
 *     _NtUserfnINSTRINGNULL@28 @ 0x1D04A (_NtUserfnINSTRINGNULL@28.c)
 *     _IsPseudoPwnd@4 @ 0x2A852 (_IsPseudoPwnd@4.c)
 *     _NtUserfnINSTRING@28 @ 0x16CB33 (_NtUserfnINSTRING@28.c)
 */

int __userpurge _InBoxString@<eax>(
        void *a1@<edx>,
        int a2@<ecx>,
        int a3,
        struct tagWND *a4,
        int *a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        int a10)
{
  int v11; // edx
  int result; // eax
  int v13; // edi
  unsigned int v14; // eax
  int v15; // ebx
  int (__stdcall *v16)(int, unsigned int, unsigned int, int, ULONG); // eax

  if ( IsPseudoPwnd(a1) || !_gptiCurrent )
    return -1;
  if ( a2 == 678 )
  {
    v13 = 399;
    v14 = (*(_DWORD *)(*(_DWORD *)(v11 + 20) + 20) >> 6) & 0xFFFFFF01;
  }
  else
  {
    v13 = 332;
    LOBYTE(v14) = (*(_DWORD *)(*(_DWORD *)(v11 + 20) + 20) & 0x200) != 0;
  }
  v15 = *(_DWORD *)(_gptiCurrent + 808);
  if ( (_BYTE)v14 || (*(_DWORD *)(*(_DWORD *)(v11 + 20) + 20) & 0x30) == 0 )
  {
    *(_DWORD *)(_gptiCurrent + 808) = 2;
    if ( a3 == v13 )
      result = NtUserfnINSTRINGNULL(v11, a3, (int)a4, a5, a6, a7, a8);
    else
      result = NtUserfnINSTRING(v11, a3, a4, a5, a6, a7, a8);
  }
  else
  {
    v16 = (int (__stdcall *)(int, unsigned int, unsigned int, int, ULONG))mpFnidPfn[((_BYTE)a7 + 6) & 0x1F];
    if ( v16 == xxxSendMessageFF || (char *)v16 == (char *)xxxWrapSendMessageBSM )
      return -1;
    *(_DWORD *)(_gptiCurrent + 808) = 1;
    result = v16(v11, a3, (unsigned int)a4, (int)a5, a6);
  }
  *(_DWORD *)(_gptiCurrent + 808) = v15;
  return result;
}
